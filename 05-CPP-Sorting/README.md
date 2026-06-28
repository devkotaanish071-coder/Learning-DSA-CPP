# CPP Sorting

This folder contains core sorting algorithms implemented to understand array partitioning, comparison mechanisms, and divide-and-conquer logic.

## Programs Included:

* **01-selection_sort**: Scans the array to repeatedly pick the minimum element from the unsorted part and swaps it into its correct place.
  * **Time Complexity**: O(N²) (Best, Average, and Worst case are all the same)
  * **Space Complexity**: O(1)

* **02-bubble_sort**: Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Contains an optimization flag (`did_swap`) to break early if the array is already sorted.
  * **Time Complexity**: O(N²) Worst/Average case | O(N) Best case (when already sorted)
  * **Space Complexity**: O(1)

* **03-insertion_sort**: Builds the final sorted array one item at a time by consuming one input element each repetition and inserting it into its correct position relative to already-sorted elements.
  * **Time Complexity**: O(N²) Worst/Average case | O(N) Best case (when already sorted)
  * **Space Complexity**: O(1)

* **04-merge_sort**: A divide-and-conquer algorithm that recursively splits the array into halves, sorts them, and uses a temporary vector to merge them back together in order.
  * **Time Complexity**: O(N log N) (Best, Average, and Worst case)
  * **Space Complexity**: O(N) due to the temporary vector used inside the merge step

* **05-quick_sort**: Picks a element as a pivot point and partitions the vector around it, moving smaller elements to the left and larger elements to the right before recursively sorting the sub-vectors.
  * **Time Complexity**: O(N log N) Average/Best case | O(N²) Worst case (when the pivot choices are highly unbalanced)
  * **Space Complexity**: O(log N) auxiliary space on average due to the recursive call stack footprint
