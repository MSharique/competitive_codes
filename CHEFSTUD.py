t = int(input())
while t>0:
    t -= 1
    talk = input()
    talk = talk.replace("<", "#")
    talk = talk.replace(">", "<")
    talk = talk.replace("#", ">")
    # print("final: ", talk)
    print(talk.count("><"))