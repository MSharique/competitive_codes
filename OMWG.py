t = int(input())
while t>0:
    t -= 1
    n, m = [int(num) for num in input().split()]
    n = (n-1)*(m-1)*2 + n + m - 2
    print(n)