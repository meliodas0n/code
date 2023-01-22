n = int(input())

X = input()
Y = input()

X = list(X)
Y = list(Y)

p = X[0]
X.remove(p)

final = []

for i in X:
  if i not in final:
    final.append(i)

for j in Y:
  if j not in final:
    final.append(j)

for i in final:
  if i == ' ':
    final.remove(i)

if len(final) == n:
  print("I become the guy.")
else:
  print("Oh, my keyboard!")