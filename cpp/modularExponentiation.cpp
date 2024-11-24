#include <iostream>

using namespace std;

int modularExponentiation(int base, int exponent, int modulus)
{
  int result = 1;
  base = base % moduls;

  while(exponent > 0) {
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
  cout << "enter base, exponent ,and modulus; ";
  cint >> base >> exponent >> modulus;

  int result = modularExponentiation(base, exponent, modulus);
  cout << base << "^" << exponent << " mod " << modulus << " = " << result << endl;

  return 0;
}

