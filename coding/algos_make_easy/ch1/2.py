from collections import Counter

string1, string2 = input().split()

def check_permutation_by_sort(string1, string2):
  if len(string1) != len(string2):
    return False
  s1, s2 = sorted(string1), sorted(string2)
  for i in range(len(s1)):
    if s1[i] != s2[i]:
      return False
  return True

def check_permutation_by_count(s1, s2):
  if len(s1) != len(s2):
    return False
  counter = [0] * 256
  for c in s1:
    counter[ord[c]] += 1
  for c in s2:
    if counter[ord[c]] == 0:
      return False
    counter[ord[c]] -= 1
  return True

def sorting_way(string1, string2):
  string1 = sorted(string1)
  string2 = sorted(string2)
  if string1 == string2:
    return True
  return False

def pythonic(string1, string2):
  if len(string1) != len(string2):
    return False
  return Counter(string1) == Counter(string2)

print(pythonic(string1, string2))