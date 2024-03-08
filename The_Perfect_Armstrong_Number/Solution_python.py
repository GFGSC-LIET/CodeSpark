def is_armstrong(n):
    digit_count = int(log10(n) + 1)
    temp, total = n, 0

    while temp > 0:
        total += (temp % 10) ** digit_count
        temp //= 10

    return total == n

n = int(input())

if is_armstrong(n):
    print("YES")
else:
    print("NO", end=" ")
    
    temp = n
    while not is_armstrong(n):
        n += 1

    print(n - temp)
