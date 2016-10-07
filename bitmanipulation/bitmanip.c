// Originally from:
// https://github.com/leagerl1/BitManipulation/blob/master/bits.c
//
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

// returns first mask (1 for positive value, 0 for zero) or second mask
// (0 for 0 or positive numbers, -1 for negative number)
int sign(int x) {
  int mask = ~(1 << 31);
  int posOrOther = ~~(x & mask);
  int mask2 = x >> 31;
  return (posOrOther | mask2);
}
