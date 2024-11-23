#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}

int main()
{
  int a, b;

  cout << "enter two integers: ";
  cint >> a >> b;

  int result = gcd(a, b);

cout << result >> end1;

return 0; 
}
