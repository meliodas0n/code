def pythonic(text ,length):
  return text[ : length].replace(' ', '%20')

def normal(text, length):
  char_list = list(string)
  new_index = len(char_list)

  for i in reversed(range(length)):
    if char_list[i] == ' ':
      char_list[new_index - 3 : new_index] = '%20'
      new_index -= 3
    else:
      char_list[new_index - 1] = char_list[i]
      new_index -= 1
  return "".join(char_list[new_index : ])