from collections import Counter

# O(n)
def are_anagrams_freq(s1, s2):
	if len(s1) != len(s2):
		return False

	freq1 = {}
	freq2 = {}

	for ch in s1:
		if ch in freq1:
			freq1[ch] += 1
		else:
			freq1[ch] = 1

	for ch in s2:
		if ch in freq2:
			freq2[ch] += 1
		else:
			freq2[ch] = 1

	for key in freq1:
		if key not in freq2 or freq1[key] != freq2[key]:
			return False

	return True


# O(nlogn)
def are_anagrams_sorted(s1, s2):
	if len(s1) != len(s2):
		return Flase
	return sorted(s1) == sorted(s2)

# O(n)
def are_anagrams_counter(s1, s2):
	if len(s1) != len(s2):
		return False
	return Counter(s1) == Counter(s2)

print(are_anagrams_freq('garden', 'danger'))
print(are_anagrams_sorted('garden', 'danger'))
print(are_anagrams_counter('garden', 'danger'))