# https://www.codechef.com/problems/CVDRUN

t = int(input())
for _ in range(t):
    cities, jumps, ccity, mycity = map(int, input().split())
    for i in range(1, cities + 1):
        if (ccity + jumps * i) % cities == mycity:  # If the Jump equals to mycity
            print("YES")
            break    
    else:
        print("NO")
