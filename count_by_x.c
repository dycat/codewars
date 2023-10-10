
void count_by(unsigned x, unsigned n, unsigned result[n]) {
  // fill the array result passed as argument with your answer
  unsigned i = 0;
  while (i < n) {
    result[i] = (i + 1) * x;
    i += 1;
  }
}
