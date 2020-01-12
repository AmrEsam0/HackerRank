#!/bin/python3
if __name__ == '__main__':
    n = int(input())
    s = set(map(int, input().split()))

    N = int(input())

    for i in range(N):
        tempCommand = input()
        if tempCommand == "pop":
            s.pop()
        else:
            tempC, tempN = tempCommand.split(" ")
            if tempC == "discard":
                s.discard(int(tempN))
            elif tempC == "remove":
                s.remove(int(tempN))
            

    print(sum(s))