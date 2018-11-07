t = int(input())
while t>0:
    t -= 1
    n, k = [int(num) for num in input().split()]
    ans = 0
    numbers = [int(num) for num in input().split()]
    for number in numbers:
        ans = (ans+(number%2))%2
    if k == 1:
        if ans == 0:
            print("odd")
        else:
            print("even")
    else:
        print("even")