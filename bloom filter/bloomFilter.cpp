#include <bits/stdc++.h>
using namespace std;

class BloomFilter {
private:
    vector<bool> bitArray;
    int size;
    int hashCount;

    // A simple hash function generator
    int hash(string s, int seed) {
        unsigned long long h = 0;
        for (char c : s) {
            h = h * seed + c;
            h %= size; // keep it inside bitArray
        }
        return (int)h;
    }

public:
    BloomFilter(int n, int k) {
        size = n;          // size of bit array
        hashCount = k;     // number of hash functions
        bitArray.resize(size, false);
    }

    void insert(string s) {
        for (int i = 1; i <= hashCount; i++) {
            int idx = hash(s, 31 + i); // different seeds
            bitArray[idx] = true;
        }
    }

    bool possiblyContains(string s) {
        for (int i = 1; i <= hashCount; i++) {
            int idx = hash(s, 31 + i);
            if (!bitArray[idx]) return false; // definitely not present
        }
        return true; // possibly present
    }
};

int main() {
    BloomFilter bf(1000, 3); // 1000 bits, 3 hash functions

    bf.insert("apple");
    bf.insert("banana");
    bf.insert("cherry");

    cout << (bf.possiblyContains("apple") ? "Maybe in set" : "Not in set") << endl;
    cout << (bf.possiblyContains("grape") ? "Maybe in set" : "Not in set") << endl;

    return 0;
}
