t = int(input())
while t>0:
    t-=1
    num = int(input())%10
    if num==0:
        print("0")
    elif num==5:
        print("1")
    else:
        print("-1")