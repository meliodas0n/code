s = input()

final = []

for i in s:
  if i.isalpha():
    final.append(i)


print(len(set(final)))