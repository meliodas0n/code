#!/usr/bin/python3

def main(n, p, q, x, y):
    total = 0
    for i in range(1, n + 1):
        num = x.count(i) + y.count(i)
        if num > 0:
            total += 1
        else:
            total += 0
    if total == n:
        print('I become the guy.')
    else:
        print('Oh, my keyboard!')        

if __name__ == "__main__":
    n = int(input())
    x = [int(item) for item in input().split()]
    p = x.pop(0)
    y = [int(item) for item in input().split()]
    q = y.pop(0)
    print(n, p, x, y)
    main(n, p, q, x, y)
