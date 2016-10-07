// checks if integer is zero by inversing zero (false) or one (true) 
// to return the opposite
int isZero(int x) {
  return !x;
}

// creates mask for even bits, mask for odd bits (flipped even bits),
// then pulls those bits into respective `even` and `odd` variables
// by the `x & <mask>` syntax
int evenOddSwap(int x) {
  int evenMask = (0xAA << 24)|(0xAA << 16)|(0xAA << 8)|(0xAA);
  int oddMask = ~evenMask;
  int evens = x & evenMask;
  int odds = x & oddMask;
  return ((evens >> 1)&(~(1<<31)))|(odds << 1);
}
