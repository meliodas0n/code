#!/usr/bin/python3

def main(n):
    if n % 2 == 0 and n > 2:
        return True
    return False

if __name__ == "__main__":
    n = int(input())
    if main(n):
        print('YES')
    else:
        print('NO')
