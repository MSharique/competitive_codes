t = int(input())
while t>0:
    t-=1
    ring = input()
    ring += ring[0]
    if ring.count("01") + ring.count("10") > 2:
        print("non-uniform")
    else:
        print("uniform")