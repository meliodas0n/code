def sum(node):
  if node == None:
    return 0
  return sum(node.left) + node.value + sum(node.right)