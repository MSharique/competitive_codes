t = int(input())
while t>0:
    t-=1
    num = [int(n) for n in input().split()]
    # print(num)
    num.sort()
    # print("sort: ", num)
    if num[-1] == len(num)-1:
        print(num[-2])
    else:
        print(num[-1])