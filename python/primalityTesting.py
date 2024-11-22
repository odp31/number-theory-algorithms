def is_prime_naive(n):
  """ 
  checks if a number is prime using a naive approach.

  args:
    n: number to check

  returns:
    True if n is prime, false otherwise 

  """
  if n <= 1:
    return False
  if n <= 3:
    return True
  if n % 2 == 0 or n % 3 == 0:
    return False

  i = 5
  while i * i <= n:
    if n % i == 0 or n % (i + 2) == 0:
      return False
    i += 6
  return True 
