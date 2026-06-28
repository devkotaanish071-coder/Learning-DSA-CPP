# CPP Hashing

This folder contains hashing challenges designed to master frequency counting using both fixed-size arrays and `std::map` / `std::unordered_map`.

## Programs Included:
* **01-frequency_count_in_array**: Counts occurrences of numbers using a fixed-size frequency array (Pre-storing technique).
  * **Time Complexity**: O(N + Q), where N is array size and Q is number of queries
  * **Space Complexity**: O(Max_Element) to allocate the hashing array
* **02-frequency_count_in_string**: Counts character frequencies in a string using a fixed-size array of size 26 or 256.
  * **Time Complexity**: O(N + Q), where N is string length and Q is number of queries
  * **Space Complexity**: O(1) since the hash array size is fixed (e.g., 26 for lowercase English letters)
* **03-frequency_count_in_array_with_map**: Tracks element occurrences dynamically using a map data structure to handle large values without memory waste.
  * **Time Complexity**: O(N) using `std::unordered_map` (O(N log N) if using `std::map`)
  * **Space Complexity**: O(U), where U is the number of unique elements stored
* **04-frequency_count_in_string_with_map**: Maps out character frequencies dynamically using a map data structure.
  * **Time Complexity**: O(N) using `std::unordered_map` (O(N log N) if using `std::map`)
  * **Space Complexity**: O(U), where U is the number of unique characters present
