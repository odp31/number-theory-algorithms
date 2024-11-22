def modular_exponentiation(base, exponent, modulus):
  """
  calculates modular exponentiation of a number

  args:
    base: base number
    exponent: the exponent
    modulus; the modulus
  returns:
    the result of (base^exponent) mod modulus
  """
  result = 1
  base %= modulus

  while exponent > 0:
    if exponent % 2 == 1:
      result = (result * base) % modulus
    exponent //= 2
    base = (base * base) % modulus

  return result 


base = 2
exponent = 10
modulus = 13 

result = modular_exponentiation(base, exponent, modulus)
print(result) 
