t = int(input())
while t>0:
    t -= 1
    n, v1, v2 = [int(num) for num in input().split()]
    v1 *= v1 * 2
    v2 *= v2
    if v1 < v2:
        print("Elevator")
    else:
        print("Stairs")