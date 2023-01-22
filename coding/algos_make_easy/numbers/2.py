def printOrderedPairs(l1, l2):
  for i in range(len(l1)):
    for j in range(len(l2)):
      print(f'{l1[i]}, {l2[i]}')

l1 = list(map(input().split(), int))
l2 = list(map(input().split(), int))
printOrderedPairs(l1, l2)