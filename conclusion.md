# Final Conclusion

Both Merge Sort and Quick Sort successfully sort the package weights in
ascending order:

**10, 10, 15, 15, 20, 20, 20, 25**

For the given input and implementations, both algorithms perform 16 key
comparisons.

Merge Sort has O(n log n) time complexity in the best, average and worst
cases, with O(n) additional space.

Quick Sort has O(n log n) best-case and average-case time complexity but
O(n²) worst-case time complexity. Its recursion uses O(log n) average space
and O(n) worst-case space.

The key requirement in this problem is stability. The original order of
equal-weight packages is:

- 10 → P4, P8
- 15 → P2, P5
- 20 → P1, P3, P6

The stable Merge Sort implementation preserves these relative orders.

Therefore, when maintaining the original relative order of equal-weight
packages is important, the stable Merge Sort implementation satisfies the
requirement.

Quick Sort can be useful when lower auxiliary memory usage is important and
stability is not required.
