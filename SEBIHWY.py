t = int(input())
while t>0:
    t-=1
    S, SG, FG, D, T = map(float,input().split())
    speed = S + D*180/T
    # print("S = {}, S")
    if abs(SG-speed) < abs(FG-speed):
        print("SEBI")
    elif abs(SG-speed) > abs(FG-speed):
        print("FATHER")
    else:
        print("Draw")