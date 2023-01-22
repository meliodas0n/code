#!/usr/bin/python3

def main(n):
    if n % 2 == 0:
        return int(n / 2)
    return int((-1) * ((n // 2) + 1))

if __name__ == "__main__":
    n = int(input())
    print(main(n))
