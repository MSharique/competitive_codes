t = int(input())
while t>0:
    t-=1
    n = int(input())
    result = [0]*1001
    arr = [int(num) for num in input().split()]
    for num in arr:
        result[num] += 1
    # print("Result: ", result)
    h1 = h2 = 0
    for i in range(0, 1001):
        if result[i]>3:
            h1 = h2 = i
        elif result[i]>1:
            h1 = h2
            h2 = i
    h1 = h1 * h2
    if h1 == 0:
        print(-1)
    else:
        print(h1)