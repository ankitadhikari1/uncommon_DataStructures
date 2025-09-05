
# 🌸 Bloom Filter in C++

## 📌 Overview

Briefly explain what the project is about.
Example:

> A **Bloom Filter** is a probabilistic data structure that checks membership in a set with high space efficiency. It guarantees no false negatives but allows a small chance of false positives.

---

## 🛠️ Features

* Fast insert and lookup operations
* Memory-efficient using a bit array
* Configurable bit array size and number of hash functions
* Simple, clean C++ implementation

---

## 📂 Project Structure

```
.
├── bloom_filter.cpp   # Main source code
├── README.md          # Documentation
└── Makefile           # (Optional) For building the project
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/bloom-filter.git
cd bloom-filter
```

### 2. Compile the Code

```bash
g++ bloom_filter.cpp -o bloom_filter
```

### 3. Run the Program

```bash
./bloom_filter
```

---

## 🧪 Example Output

```
Maybe in set
Not in set
```

---

## 📖 How It Works

1. Uses a **bit array** of fixed size.
2. Applies multiple **hash functions** when inserting elements.
3. To check membership:

   * If any position is `0` → element is **definitely not present**.
   * If all positions are `1` → element is **possibly present**.

---

## 📊 Complexity

* **Insertion**: O(k)
* **Lookup**: O(k)
  (where `k` is the number of hash functions)

---

## 📚 References

* [Bloom Filter (Wikipedia)](https://en.wikipedia.org/wiki/Bloom_filter)
* [Probabilistic Data Structures](https://medium.com/basecs)

---