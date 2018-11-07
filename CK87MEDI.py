t = int(input())
while t>0:
    t -= 1
    n, k = [int(num) for num in input().split()]
    values = [int(num) for num in input().split()]
    values.sort()
    k = int((n+k)/2)
    if k<n:
        print(values[k])
    else:
        print(values[-1])