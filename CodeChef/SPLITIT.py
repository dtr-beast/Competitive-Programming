# https://www.codechef.com/problems/SPLITIT

for _ in range(int(input())):
    strlen = int(input())
    string = input()
    b = string[-1]
    if b in string[:-1]:
        print("YES")
    else:
        print("NO")
