# Search Algorithm Comparison

This program is an attempt to illustrate the difference in complexity between **Linear Search** (or Simple Search) and **Binary Search** when trying to find a randomly generated target within a sorted array. The array contains values ranging from `min_value` to `max_value`, which can be either negative or positive.

## Linear (Simple) Search

Linear Search is a straightforward searching algorithm that sequentially checks each element of the array until it finds the target or reaches the end of the list.

- **Advantage - Simplicity**: Linear Search is easy to implement and is an excellent choice for small datasets and simple search tasks. [1]
- **Disadvantage - Efficiency**: Linear Search can be inefficient for large datasets as it examines each element one by one. In the worst-case scenario, it has a time complexity of **O(n)**. [1]
- **No Sorting Requirement**: Unlike Binary Search, Linear Search does **not** require the array to be sorted, making it suitable for a wider range of applications. [1] [2]

## Binary Search

Binary Search is a more efficient algorithm that repeatedly divides the sorted array into halves to quickly locate the target value.

- **Advantage - Efficiency**: Binary Search is highly efficient, particularly for large datasets. It systematically halves the search space with each comparison, resulting in a time complexity of **O(log n)**. [1]
- **Disadvantage - Sorted Data Requirement**: Binary Search requires the dataset to be sorted beforehand. This prerequisite can be a limitation when dealing with unsorted or dynamically changing datasets. [1]

## Sources

To gain a better understanding of these algorithms, I invite you to explore the following resources. They provide an overview of the algorithms and their basic implementations in various programming languages before attempting to analyze this program:

[1] [Difference Between Linear Search and Binary Search - Shiksha](https://www.shiksha.com/online-courses/articles/difference-between-linear-search-and-binary-search/)

[2] [Linear Search vs Binary Search - GeeksforGeeks](https://www.geeksforgeeks.org/linear-search-vs-binary-search/)

