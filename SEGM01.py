t = int(input())
while t>0:
    t-=1
    val = input()
    start_index = val.find('1')
    last_index = val.rfind('1')
    if start_index == -1:
        print("NO")
    else:
        val = val[start_index:last_index+1]
        if val.count('0') == 0:
            print("YES")
        else:
            print("NO")