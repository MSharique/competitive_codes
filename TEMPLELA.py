t = int(input())
while t>0:
    t -= 1
    n = int(input())
    values = input()
    if n%2 == 0:
        exp_values = ""
    else:
        exp_values = [i for i in range(1, int(n/2)+1)]
        arr2 = [i for i in range(int(n/2)+1, 0, -1)]
        exp_values.extend(arr2)
        exp_values = ' '.join(str(num) for num in exp_values)
    if values == exp_values:
        print("yes")
    else:
        print("no")