a = int(input())
b = int(input())
area = a*b
peri = 2*(a+b)
if area>peri:
    print("Area\n{}".format(area))
elif peri>area:
    print("Peri\n{}".format(peri))
else:
    print("Eq\n{}".format(area))