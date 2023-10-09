#include <stdlib.h>

int sum_array(const int *values, size_t count) {
  if (count == 0) {
    return 0;
  }
  int sum = 0;
  for (int i = 0; (size_t)i < count; i++) {
    sum += values[i];
  }
  return sum;
}
