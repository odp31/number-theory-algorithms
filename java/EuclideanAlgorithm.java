// used to find gcd of two ints

public class EuclideanAlgorithm
  {
    public static int gcd(int a, int b)
    {
      if(b > a)
      {
        int temp = a;
        a = b;
        b = temp;
      }
      // base case: if b is 0, a is the GCD
      if(b == 0)
      {
        return a;
      }
      return gcd(b, a % b)
        }


    public static void main(String[] args)
    {
      int num1 = 48; 
      int num2 = 18;
      int result = gcd(num1, num2);

    }
  }
