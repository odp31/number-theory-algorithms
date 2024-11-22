def gcd(a, b):
  while b != 0:
    a, b = b, a % b
  return a 

# example usage
num1 = 48
num2 = 18
result = gcd(num1, num2)

print("gcd of", num1, "and", num2, "is", result)
