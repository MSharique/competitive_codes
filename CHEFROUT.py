import re
# def result(c_start, c_end, e_start, e_end, s_start, s_end):
#     if c_end > e_start or c_end > s_end:
#         return "no"
#     elif e_start < c_end or e_start > s_start:
#         return "no"
#     elif e_end > s_start or e_end < c_end:
#         return "no"
#     elif s_start < e_end or s_start < c_end:
#         return "no"
#     elif s_end < e_end or s_end < c_end:
#         return "no"
#     return "yes"

t = int(input())
while t>0:
    t-=1
    logs = list(input().strip())
    # print("lll: ", logs)
    # print(result(logs.find('C'), logs.rfind('C'), logs.find('E'), logs.rfind('E'), logs.find('S'), logs.rfind('S')))
    # if re.match("^CES*$", logs):
    #     print("yes")
    # else:
    #     print("no")
    corrcect_log = 1
    # print("len {} ".format(len(logs)))
    for i in range (len(logs)-1):
        if ((logs[i]=='E' and logs[i+1]=='C') or (logs[i]=='S' and logs[i+1]=='E') or (logs[i]=='S' and logs[i+1]=='C')):
            corrcect_log = 0
            break
    if(corrcect_log==1):
           print("yes")
    else:
           print("no")
    