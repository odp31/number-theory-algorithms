void extendedEucliedean(int a, int b, int *x, int *y, int *gcd)
{
  if(b == 0) {
    *gcd = a;
    *x = 1;
    *y = 0;
  }
  else {
    extendedEuclidean(int a, int b, int *x, int *y, int *gcd) {
      if(b == 0) {
        *gcd = a; 
        *x = 1; 
        *y = 0;
      }
      else {
        extendedEuclidean(b, a%b, y, x, gcd);
        *y =- (*x * (a/b));
      }
    }

int main()
{
  int a, b, x, y, gcd;

  printf("enter two integers; ");
  scanf("%d %d", &a, &b);

  extendedEuclidean(a, b, &x, &y, &gcd);

  printf("GCD(%d, %d) = %d\n", a, b, gcd);
  printf("%dx + %dy = %d\n", a, b, gcd);
  printf("x = %d, y = %d\n", x, y);

  return 0;
}

