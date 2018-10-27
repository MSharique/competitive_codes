t = int(input())
while t>0:
    t-=1
    a, b = input().split()
    # print("a = {} and b = {}".format(a, b))
    a = int(a)
    b = int(b)
    for i in range(1, 1001):
        if i%2 == 0:
            # even case - Bob turn
            if b>=i:
                b -= i
            else:
                print("Limak")
                break
        else:
            # odd case - Limak turn
            if a>=i:
                a -= i
            else:
                print("Bob")
                break