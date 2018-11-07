t = int(input())
while t>0:
    t -= 1
    n = int(input())
    ht = input().replace(".", "")
    n = ht.count("HT")
    # print("ht: ", ht)
    # print("ht_cnt: ", n)
    if n*2 == len(ht):
        print("Valid")
    else:
        print("Invalid")
