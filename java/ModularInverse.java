public class ModularInverse
  {
    public static int modInverse(int a, int m)
    {
      int m0 = m;
      int y = 0, x =1;
      if(m == 1)
      {
        return 0;
      }
      while (a > 1)
        {
          int q = a / m;
          int t = m;
          m = a % m;
          a = t;
          t = y; 
          y = x - q * y;
          x = t;
        }
      if(x < 0)
      {
        x += m0;
      }
      return x;
    }
    public static void main(String[] args)
    {
      int a = 3, m = 11;
      int modInverse = modInverse(a, m);
      if(modInverse == -1)
        System.out.println("mod inverse doesn't exist);
      else
        System.out.println("mod multiplactive inverse is" + modInverse);
    }
    
