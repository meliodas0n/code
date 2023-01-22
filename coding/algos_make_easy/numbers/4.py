def reverse(l):
  for i in range(len(l) / 2):
    other = len(l) - i - 1
    l[i], l[other] = l[other], l[i]