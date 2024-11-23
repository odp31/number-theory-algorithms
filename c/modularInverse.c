// modualr inverse of an integer a modulo m is an integer x such that
// (a * x( % m  === 1(mod m)

int modInverse(int a, int m)
{
  int m0 = m;
  int x0 = 0, x1 = 1;

  if (m == 1)
    return 0; 

  while(a > 1) {
    int q = a / m;
    int t = m;

    m = a % m, a = t;
    t = x0;   
    x0 = x1 - q * x0;
    x1 = t;

  }
  if(x1 < 0)
    x1 += m0;
  return x1;

}

int main()
{
  int a, m;

  printf("enter two itnegers a and m: ");
  scanf("%d %d", &a, &m);

  int mod_inverse= modInverse(a, m);
  if(mod_inverse == -1)
    printf("modualr inverse doesn't ecist\n");
  else
    printf("modular multiplicative inverse is %d\n", mod_inverse);
  return 0; 
}
