t = int(input())
while t>0:
    t-=1
    problem_counter = {
        "cakewalk": 0,
        "simple": 0,
        "easy": 0,
        "easy-medium": 0,
        "medium": 0,
        "medium-hard": 0,
        "hard": 0
    }
    n = int(input())
    while n>0:
        n-=1
        problem_type = input().strip()
        problem_counter[problem_type] += 1
    
    if problem_counter["cakewalk"]>0 and problem_counter["simple"]>0 and problem_counter["easy"]>0 and (problem_counter["easy-medium"] + problem_counter["medium"]) > 0 and (problem_counter["medium-hard"]+problem_counter["hard"])> 0:
        print("Yes")
    else:
        print("No")