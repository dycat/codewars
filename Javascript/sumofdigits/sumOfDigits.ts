export const digitalRoot = (n: number): number => {
  // your code here
  let sum_iter = n;
  const inputString = n.toString();
  const inputArray: number[] = inputString
    .split("")
    .map((item) => parseInt(item));
  sum_iter = sum(inputArray);

  if (sum_iter < 10) {
    return sum_iter;
  } else {
    return digitalRoot(sum_iter);
  }
  
};

const sum = (array: number[]): number => {
  var result: number = 0;
  array.forEach((item) => (result += item));
  return result;
};

digitalRoot(16);
