string = input()

new_list = []

for i in range(len(string) - 1, -1, -1):
  new_list.append(string[i])


reverse = ''.join([i for i in new_list])
print(reverse)
print(new_list)


print(''.join([string[i] for i in range(len(string) - 1, -1, -1)]))