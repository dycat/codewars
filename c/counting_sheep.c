#include <stdbool.h>
#include <stddef.h>
#include <criterion/criterion.h>


size_t count_sheep(const bool *sheep, size_t count);

size_t count_sheep(const bool *sheep, size_t count){
  int sheep_number = 0;
  for (size_t i=0; i < count; i ++ ){
    if (sheep[i]){
      sheep_number ++;
    }
  }
  return sheep_number;
}

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  {
    const bool sheep[] = {
      true,  true,  true,  false,
      true,  true,  true,  true,
      true,  false, true,  false,
      true,  false, false, true,
      true,  true,  true,  true,
      false, false, true,  true
    };
    const size_t received = count_sheep(sheep, sizeof(sheep)/sizeof(sheep[0]));
    const size_t expected = 17;
    cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
  }
}