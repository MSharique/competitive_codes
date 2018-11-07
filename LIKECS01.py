t = int(input())
while t>0:
    t-=1
    val = input().strip()
    ans = "no"
    for c in val:
        if val.count(c) > 1:
            ans = "yes"
            break
    print(ans)