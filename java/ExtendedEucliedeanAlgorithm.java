public class ExtendedEuclideanAlgorithm
  {
    public static int[] extendedEuclidean(int a, int b)
    {
      if(b == 0)
      {
        return new int[]{a, 1, 0}; 
      }
      int[] result = extendedEuclidean(b, a %b);
      int gcd = result[0];
      int x1 = result[1];
      int y1 = result[2];

      int x = y1;
      int y = x1 - (a / b) * y1;

      return new int[]{gcd, x, y};
    }
    public static void main(String[] args)
    {
      int a = 35, b = 15;
      int[] result = extendedEuclidean(a, b);

    }
  }
