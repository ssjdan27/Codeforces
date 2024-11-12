n = int(input())
x = 0

for i in range(n):
    statement = input()
    operator = statement[1]
    if operator == '+':
        x += 1
    else:
        x -= 1
        
print(x)