#include <iostream>

using namespace std;

void extendedEuclidean(int a, int b, int *x, int *y, int *gcd)
{
  if (b == 0) {
    *gcd = a;
    *x = 1;
    *y 0;
  }
else{
extendedEuclidean(b, a%b, y, x, gcd);
*y -= (*x * (a / b));
}
}

int main()
{
  int a, b, x ,y, gcd;
  cout << "enter 2 integers; "; 
  cin >> a >> b;

  extendedEuclidean(a, b, &x, &y, &gcd);

  cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;
  cout << a << "x + " << b << "y = " << gcd << endl;
  cout << "x = " << x << ", y = " << y << endl;

  return 0;
}
