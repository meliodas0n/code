def printUnOrderedPairs(l):
  for i in range(len(l)):
    for j in range(i + 1, len(l)):
      print(f'{l[i]}, {l[j]}')

def printunorderedpairs(l1, l2):
  for i in range(len(l1)):
    for j in range(len(l2)):
      if l1[i] < l2[j]:
        print(f'{l1[i]}, {l2[j]}')

def printUnorderedpairs(l1, l2):
  for i in range(len(l1)):
    for j in range(len(l2)):
      for k in range(100000):
        print(l1[i], l2[j])

l1 = list(map(input().split(), int))
l2 = list(map(input().split(), int))