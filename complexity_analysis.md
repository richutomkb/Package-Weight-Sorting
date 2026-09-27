# Complexity Analysis

## Merge Sort

Merge Sort uses divide-and-conquer: the input is repeatedly divided into
smaller parts and the sorted parts are merged.

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

**Space Complexity:** O(n), because an auxiliary array is used during merging.

**Stability:** Yes, with the implementation used here. The `<=` comparison
causes an equal key from the left subarray to be selected first.

## Quick Sort

Quick Sort partitions the array around a pivot.

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n²) |

**Space Complexity:**
- Average recursion space: O(log n)
- Worst recursion space: O(n)

**Stability:** No guarantee in the standard in-place implementation.

## Given Input

- Merge Sort comparisons: 16
- Quick Sort comparisons: 16

These comparison counts are specific to the given input and pivot choice.
