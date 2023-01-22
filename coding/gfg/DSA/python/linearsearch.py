def linear_search(l, x):
  for i in l:
    if i == x:
      return l.index(i) + 1

l = [int(i) for i in input().split()]
x = int(input())
print(linear_search(l, x))