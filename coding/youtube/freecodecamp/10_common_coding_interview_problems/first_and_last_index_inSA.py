def first_and_last(arr, target):
	for i in range(len(arr)):
		if arr[i] == target:
			start = i
			while i + 1 < len(arr) and arr[i] ==  target:
				i += 1
			return [start, i]
	return [-1, -1]


# binary search implementation
def find_start(arr, target):
	if arr[0] == target:
		return 0
	left, right = 0, len(arr) - 1
	while left <= right:
		mid = (left + right) // 2
		if arr[mid] == target and arr[mid - 1] < target:
			return mid
		elif arr[mid] < target:
			left = mid + 1
		else:
			right = mid - 1
	return -1