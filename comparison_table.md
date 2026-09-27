# Comparison of Merge Sort and Quick Sort

| Feature | Merge Sort | Quick Sort |
|---|---|---|
| Duplicate values | Handles | Handles |
| Stable | Yes | No, standard implementation |
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Space | O(n) | O(log n) average, O(n) worst |
| In-place | No | Yes, generally |
| Comparisons for given input | 16 | 16 |
| Preserves equal-element order | Yes | Not guaranteed |

## Duplicate Values

- 10 → P4, P8
- 15 → P2, P5
- 20 → P1, P3, P6

## Stability

A stable sorting algorithm preserves the original relative order of records
having equal keys.

Merge Sort preserves the above package-ID order.

The standard Quick Sort implementation does not guarantee this property.

## Interpretation

For this particular input, both implementations make 16 key comparisons.
That is an execution-specific result, not a general complexity result.

Merge Sort provides O(n log n) worst-case time and stability, while Quick Sort
typically uses less auxiliary memory but has an O(n²) worst case and no
stability guarantee in this implementation.
