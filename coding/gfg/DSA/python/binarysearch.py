def binary_search(l, x, low, high):
  if high >= low:
    mid = (high + low) // 2
    if l[mid] == x:
      return mid
    elif l[mid] < x:
      return binary_search(l, x, 0, mid)
    else:
      return binary_search(l, x, mid + 1, high)
  else:
    return -1

l = [int(i) for i in input().split()]
x = int(input())
print(binary_search(l, x, 0, len(l) - 1))