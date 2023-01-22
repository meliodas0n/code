#!/usr/bin/python3

def main(s):
    res = ''
    if len(s) <= 10:
        res = s
    else:
        res = s[0] + str(len(s) - 2) + s[-1]
    return res

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        inp = input()
        print(main(inp))
