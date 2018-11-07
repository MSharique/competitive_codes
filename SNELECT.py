t=int(input())
while t>0:
    t-=1
    s=input()
    snake_count=0
    mang_count=0
    eaten=[0]*len(s)
    gone = 0
    for i in range(0, len(s)):
        # print("i = {}".format(i))
        if s[i]=='m':
            mang_count += 1
            if (i>0 and s[i-1]=='s' and eaten[i-1]==0):
                eaten[i-1]=1
                gone += 1
            elif(i+1!=len(s) and s[i+1]=='s' and eaten[i+1]==0):
                eaten[i+1]=1
                gone += 1
        else:
            snake_count += 1
    snake_count -= gone
    if(mang_count > snake_count):
        print("mongooses")
    elif(snake_count > mang_count):
        print("snakes")
    else:
        print("tie")
