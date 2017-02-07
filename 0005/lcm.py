min_multiple = 2  # We start at 2 instead of 1,  everything is divisble by 1
max_multiple = 20


def multiplyRange(min, max):
    product = 1

    for i in range(min, max):
        product *= i

    return product


max_lcm = multiplyRange(min_multiple, max_multiple)
multiples = max_multiple-min_multiple

for i in xrange(min_multiple, max_lcm):
    num_of_multiples = 0

    for j in range(min_multiple, max_multiple):
        if i % j == 0:
            num_of_multiples += 1
        else:
            break

    if num_of_multiples == multiples:
        print("LCM: " + str(i))
        break
