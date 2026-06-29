# CPP Arrays

This folder contains basic, medium, and hard level array problems.

## Programs Included:
* **01-find_largest_element**: Finds the largest element in a 1D array (handles negative numbers too).
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **02-find_second_largest_element**: Finds the second largest element in a 1D array containing negative numbers.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **03-array_is_sorted_or_not**: Takes a user-inputted array and checks if it is sorted or not.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **04-remove_duplicate**: Removes duplicate elements from a sorted user-inputted array in-place.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **05-left_rotate_array**: Rotates a user-inputted array left by 1 position.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **06-left_rotate_by_k_element_brute**: Takes an array and a shift factor K, then rotates it using an extra temp array.
  * **Time Complexity**: O(N) 
  * **Space Complexity**: O(K)

* **07-left_rotate_by_k_element_optimized**: Rotates the array by reversing parts (0 to N-K-1), (N-K to N-1), and then the whole array.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **08-right_rotate_by_k**: Rotates a user-inputted array to the right by K positions without using any in-built reverse functions.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **09-moving_zero_brute**: Uses a temp array to collect all non-zero elements, overwrites the original array with them, and pads the remaining space with zeroes.
  * **Time Complexity**: O(N) 
  * **Space Complexity**: O(N) (where up to N elements are copied to temp)

* **10-moving_zero_optimized**: Uses a Two-Pointer Approach where pointer A tracks the next non-zero position and pointer B traverses to swap non-zeroes forward.
  * **Time Complexity**: O(N)
  * **Space Complexity**: O(1)

* **11-linear_search**: Takes an array and searches for a target number sequentially using a for loop.
  * **Time Complexity**: O(N) worst-case (O(1) best-case if found at the start)
  * **Space Complexity**: O(1)

* **12-union_of_two_arrays_brute**: Combines two arrays into a sorted union using a `std::set` to filter out duplicates.
  * **Time Complexity**: O((N + M) * log(N + M)) due to set insertions
  * **Space Complexity**: O(N + M) to store elements inside the set and temp vector

* **13-union_of_sorted_array_optimized**: Combines two sorted arrays into a single unique sorted union using a linear Two-Pointer approach.
  * **Time Complexity**: **O(N + M)** where N and M are the sizes of the two arrays.
  * **Space Complexity**: **O(N + M)** in the worst case to return the combined result vector.

