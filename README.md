# Procedural ASCII Art Engine: India Map Generator

A lightweight C++ console application that programmatically renders a high-fidelity ASCII art map of India. Instead of using a typical block of hardcoded text strings, this engine reconstructs the geographic outline dynamically by passing a compressed array of packed tracking coordinates through mathematical modulo extraction logic.

## 🚀 Live Execution

You can compile and test the execution of this standalone rendering layout directly in your C++ workspace or via an interactive cloud compiler:
👉 **[Run Code in Online GDB](https://www.onlinegdb.com/)**

---

## 🛠️ Code Architecture & Logic Breakdown

The engine operates by scanning a grid matrix representing a $52 \times 74$ viewport space. For every console coordinate step, it runs a bit-packed array evaluation tree to decide whether to print a foreground character (`*`) or empty background space (` `).

### 1. Highly Compressed Coordinate Packing (`long long int a[]`)
The geometry of the country is encoded into an array of large integer primitives. The index positions `1` to `52` map cleanly to rows in the console window output, while index positions `53` to `58` act as geometric bitmask factors representing powers of ten ($10^4, 10^6, 10^8, 10^{10}, 10^{12}, 10^{14}$).

### 2. Modulo Segment Extraction
For any given line index $j$, the code parses the ultra-long primitive values into four separate coordinate ranges using successive division and modulo steps:
```cpp
if( ((i <= a[j] % a[0]) && (i >= ((a[j] % a[53]) / a[0]))) || 
    ((i <= ((a[j] % a[54]) / a[53])) && (i >= ((a[j] % a[55]) / a[54]))) || 
    ...
