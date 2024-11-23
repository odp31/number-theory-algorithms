import java.math.BigInteger;

public class ModularExponentiation
  {
    public static BigInteger modularExponentiation(BigInteger base, BigInteger exponent, BigInteger modulus)
    {
      BigInteger result = BigInteger.ONE;
      base = base.mod(modulus);

      while(exponent.compareTo(BigInteger.ZERO) > 0)
        {
          if(exponent.testBit(0))
          {
            result = result.multiply(base).mod(modulus);
          }
          exponent = exponent.shiftRight(1);
          base = base.multiply(base).mod(modulus);
        }
      return result;
    }
    public static void main(String[] args)
    {
      BigInteger base = new BigInteger("2");
      BigInteger exponent = new BigInteger("1000");
      BigInteger modulus = new BigInteger("13);
      BigInteger result = modularExponentiation(base, exponent, modulus);
      System.out.println(base + "^" + exponent + " mod " + modulus + " = " + result);
    }
  }

