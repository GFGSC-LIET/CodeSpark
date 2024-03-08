n = int(input())
s = input()

sum = 0
for char in s:
    if char == '+':
        sum -= 1
    else:
        sum += 1

print(sum)
