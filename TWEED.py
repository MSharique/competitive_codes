t = int(input())
while t>0:
    t-=1
    n, player = input().split()
    val = [int(num) for num in input().split()]

    if player=="Dee" and int(n)==1 and val[0]%2==0:
        print(player)
    else:
        print("Dum")