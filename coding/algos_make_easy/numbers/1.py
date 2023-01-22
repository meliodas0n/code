def main(l):
  sum = 0
  prod = 0

  for i in range(len(l)):
    sum += l[i]

  for i in range(len(l)):
    prod *= l[i]

  return sum, prod