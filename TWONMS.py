t = int(input())
while t>0:
    t-=1
    a, b, turns = input().split()
    turns = int(turns)
    a = int(a)
    b = int(b)
    if turns%2 == 1:
        a = a*2
    temp = max(a, b)
    a = min(a, b)
    temp = int(temp/a)
    print(temp)