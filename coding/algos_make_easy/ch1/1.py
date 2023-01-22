def method2(string):
  new_list = []
  for i in string:
    if i not in new_list:
      new_list.append(i)
  if len(new_list) == len(string):
    return True
  return False

def main(string):
  return len(set(string)) == len(string)

string = input()
print(main(string))
print(method2(string))