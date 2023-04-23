// What do we need is the minimum possible value
// The key itself is the fact that the pile of apples is divisible by n + 1.
// The best way to either iterate through all combinations of n * i-th 
// Or n * n is awlways divisible by n but since there are n bears and each one take 1 apple, then n*n - (n-)

#include <math.h>

int howManyApples(int n) {
  //coding and coding...
  if (n == 2){
    return 7;
  }
  return pow(n, n) - (n - 1);
}