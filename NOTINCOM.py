def take_input():
    return [int(num) for num in input().split()]

t = int(input())
while t>0:
    t-=1
    n, m = take_input()
    a = take_input()
    b = take_input()
    a.extend(b)
    print(len(a) - len(set(a)))