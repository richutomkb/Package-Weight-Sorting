# Trace Table – Merge Sort and Quick Sort

## Input

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

## Merge Sort Trace

| Step | Operation | Result |
|---:|---|---|
| 1 | Merge P1(20), P2(15) | P2(15), P1(20) |
| 2 | Merge P3(20), P4(10) | P4(10), P3(20) |
| 3 | Merge first half | P4(10), P2(15), P1(20), P3(20) |
| 4 | Merge P5(15), P6(20) | P5(15), P6(20) |
| 5 | Merge P7(25), P8(10) | P8(10), P7(25) |
| 6 | Merge second half | P8(10), P5(15), P6(20), P7(25) |
| 7 | Final merge | P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25) |

**Merge Sort comparisons: 16**

## Quick Sort Trace

The implementation uses the last element of each subarray as the pivot.

| Step | Pivot | Result after partition |
|---:|---:|---|
| 1 | 10 | See `output.txt` for the exact program trace |
| 2 | 15 | See `output.txt` for the exact program trace |
| 3 | 20 | See `output.txt` for the exact program trace |
| 4 | 20 | See `output.txt` for the exact program trace |

**Quick Sort comparisons: 16**

## Stability Verification

Original equal-weight order:

- 10 → P4, P8
- 15 → P2, P5
- 20 → P1, P3, P6

The stable Merge Sort implementation preserves these relative orders.

The standard in-place Quick Sort implementation does not guarantee stability.
