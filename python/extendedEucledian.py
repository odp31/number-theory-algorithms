def extended_gcd(a, b):
  """
  calculates gcd of a and b and also finds coefficients x and y such that 
  ax + by = gcd(a, b)

  args:
    a: first integer
    b: second integer
  returns:
  A tuple(gcd, x, y) where:
    gcd: greatest common divisor of a and b
    x, y: coeffficients such that ax + by = gcd(a,b)
  """
  if b == 0:
    return a, 1, 0
  else:
    gcd, x1, y1 = extended_gcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd, x, y 

# example usage
a = 24
b = 18
gcd, x, y = extended_gcd(a, b)
print(f"GCD({a}, {b}) = {gcd}")
print(f"{a} * {x} + {b} * {y} = {gcd}")
