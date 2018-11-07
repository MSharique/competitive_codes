from string import ascii_lowercase

t = int(input())
while t>0:
    t -= 1
    cost = [int(num) for num in input().split()]
    text = input()
    ans = 0
    # print("ascii: ", ascii_lowercase)    
    for ch in ascii_lowercase:
        if ch not in text:
            ans += cost[ascii_lowercase.find(ch)]
    print(ans)