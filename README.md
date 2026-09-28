# Package Weight Sorting

## Data Structures

### Problem

A logistics company receives the package weights:

**20, 15, 20, 10, 15, 20, 25, 10**

Each package has a unique package ID.

The task is to implement Merge Sort and Quick Sort, execute both programs,
record important intermediate steps, verify stability using package IDs,
compare the algorithms, and determine the suitable approach when preserving
the original order of equal-weight packages is important.

## Package Details

| Package ID | Weight |
|---|---:|
| P1 | 20 |
| P2 | 15 |
| P3 | 20 |
| P4 | 10 |
| P5 | 15 |
| P6 | 20 |
| P7 | 25 |
| P8 | 10 |

## Repository Contents

```text
Question-10-Package-Sorting/
├── README.md
├── src/
│   └── sorting.c
├── input/
│   └── input.txt
├── output/
│   └── output.txt
├── trace/
│   └── trace_table.md
├── analysis/
│   ├── complexity.md
│   └── comparison.md
└── conclusion/
    └── final_conclusion.md
```

## Algorithms

### Merge Sort

- Best: O(n log n)
- Average: O(n log n)
- Worst: O(n log n)
- Space: O(n)
- Stable in this implementation.

### Quick Sort

- Best: O(n log n)
- Average: O(n log n)
- Worst: O(n²)
- Average recursion space: O(log n)
- Worst recursion space: O(n)
- Standard implementation is not stable.

## Execution Results

### Merge Sort

Final result:

`P4(10) P8(10) P2(15) P5(15) P1(20) P3(20) P6(20) P7(25)`

Comparisons: **16**

### Quick Sort

Final weights:

`10 10 15 15 20 20 20 25`

Comparisons: **16**

The exact package-ID order produced by Quick Sort is recorded in
`output/output.txt`.

## Stability Verification

Original equal-weight order:

- 10 → P4, P8
- 15 → P2, P5
- 20 → P1, P3, P6

Merge Sort preserves these orders.

## Conclusion

When preserving the original relative order of equal-weight packages is
important, the stable Merge Sort implementation is suitable for this
requirement.

Quick Sort can be useful when lower auxiliary memory usage is important and
stability is not required.
