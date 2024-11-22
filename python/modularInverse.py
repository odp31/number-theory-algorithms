def extended_gcd(a, b):
  if b == 0:
    return a, 1, 0
  else:
    gcd, x1, y1 = extended_gcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd, x, y


def mod_inverse(a, m):
  gcd, x, y = extended_gcd(a, m)
  if gcd != 1:
    return None
  else:
    return x % m 

# example usage
a = 3 
m = 11
mod_inv = mod_inverse(a, m)
if mod_inv is not None:
  print(f"Modular inverse of {a} mod {m} is {mod_inv}")
else:
  print(f"{a} has no modular inverse modulo {m}")


