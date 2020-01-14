#!/bin/python3


def rotate(l, n):
    return l[n:] + l[:n]


if __name__ == '__main__':
    n, moves = map(int, input().split())
    arr = list(map(int, input().split()))
    print(*rotate(arr, moves), end=" ")
