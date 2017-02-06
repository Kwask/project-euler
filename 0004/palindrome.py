check_length = 3

min_proudct = 10**(2*check_length - 1)
max_product = (10**(2*check_length)) - 1


def isPalindrome(arg):
    num = str(arg)

    length = len(num)
    check_length = int(length / 2)

    for i in range(0, check_length):
        if(num[i] != num[(length-1)-i]):
            return False

    return True


# Two equal length factors
def hasTELF(arg, length):
    min_num = 10**(length - 1)
    max_num = (10**(length)) - 1

    for i in range(min_num, max_num):
        factor = float(arg)/i
        if factor.is_integer():
            if len(str(int(factor))) == length:
                return True

    return False


for i in range(max_product, min_proudct, -1):
    if isPalindrome(i):
        if hasTELF(i, check_length):
            print(i)
            break
