# https://www.codechef.com/problems/TREE2
# SEEN EDITORIAL


for _ in range(int(input())):
    n = int(input())
    distinct_sticks = set(map(int, input().split()))
    print(len(distinct_sticks) - 1 if 0 in distinct_sticks else len(distinct_sticks))

# Goal is to find the number of Non-Zero distinct Values