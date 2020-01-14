#!/bin/python3

def list_sum(l):
    total = 0
    for i in range(len(l)):
        total = total + l[i]
    return total

def hourglassSum(arr):
        max = -1000
        s= []
        sub_array = []
        for m in range(4):
            for col in range(4):
                for row in range(3):
                    sub_array.append(arr[row + m][col: col + 3])
                    s = sub_array
                hour_sum = list_sum(s[0]) + s[1][1] + list_sum(s[2])
                if (max < hour_sum):
                    max = hour_sum
                sub_array = []
        return max


if __name__ == '__main__':
    arr = [list(map(int, input().split())) for y in range(6)]
    print(hourglassSum(arr))