max_num = 10000000
numbers = [True] * (max_num+1)
prime_num = 0
max_prime_num = 10001

for i in range(2, max_num+1):
    if not numbers[i]:
        continue

    prime_num += 1
    print(str(i))

    for j in range(i+i, max_num+1, i):
        numbers[j] = False

    if max_prime_num:
        if prime_num == max_prime_num:
            break
