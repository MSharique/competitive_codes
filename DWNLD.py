t = int(input())
while t>0:
    t-=1
    n, k = [int(num) for num in input().split()]
    # print("n = {} amd k = {}".format(n, k))
    ans = 0
    for i in range(0, n):
        a, b = [int(num) for num in input().split()]
        if k>=a:
            k -= a
            a = 0
        else:
            a = a - k
            k = 0
        ans += a*b
    print(ans)