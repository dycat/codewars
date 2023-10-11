/*
Your goal in this kata is to implement a difference function, which subtracts one list from another and returns the result.

It should remove all values from list a, which are present in list b keeping their order.

array_diff({1, 2}, 2, {1}, 1, *z) == {2} (z == 1)
If a value is present in b, all of its occurrences must be removed from the other:

array_diff({1, 2, 2, 2, 3}, 5, {2}, 1, *z) == {1, 3} (z == 2)
NOTE: In C, assign return array length to pointer *z
*/

#include <stdbool.h>
#include <stdlib.h>

bool a_in_arr(int a, const int *arr) {
  while(*arr--){
    if (a == *arr) {
      return true;
    }
  }
  return false;
  
}

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {

  int* diff_arr = (int*) malloc(n1 * sizeof(size_t));
   size_t n = 0;
   *z = 0;
    for (size_t i = 0; i < n1; i++) {
      if (!a_in_arr(arr1[i], arr2)) {
        diff_arr[n] = arr1[i];
        n += 1; 
        *z += 1;
      }
    }

    return diff_arr;
}
