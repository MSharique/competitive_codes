result = {
    0: 'Beginner',
    1: 'Junior Developer',
    2: 'Middle Developer',
    3: 'Senior Developer',
    4: 'Hacker',
    5: 'Jeff Dean'
}

t = int(input())
while t>0:
    t-=1
    answers = input()
    print(result[answers.count('1')])