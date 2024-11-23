// mathematic operation that calculates remainder when a large number
// is raised to a large power and divided by a given modulus 

int modularExponentiation(int base, int exponent, int modulus)
{
  int result = 1;
  base = base % modulus;

  while (exponent > 0) {
    if (exponent % 2 == 1) {
      result = (result * base) % modulus;
    }
    exponent = exponent / 2;
    base = (base * base) % modulus; 
  }
  return result;
}

int main()
{
  int base, exponent, modulus;
  printf("enter base, exponeent, and modulus");
  scanf("%d %d %d", &base, &exponent, & modulus);

  int result = modularExponentiation(base, exponent, modulus);

  printf("%d^%d mod %d = %d\n", base, exponent, modulus, result);

  return 0;
}
