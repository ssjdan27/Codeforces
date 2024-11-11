n = int(input())
count = 0

for i in range(n):
    x = [int(x) for x in input().split()]
    sure_count = sum(x)
    if sure_count > 1:
        count += 1
    
print(count)