sum_of_squares = 0
square_of_sum = 0

for i in range(1, 101):
    square_of_sum += i
    sum_of_squares += i**2

print("square_of_sum: " + str(square_of_sum))
print("sum_of_squares: " + str(sum_of_squares))

diff = square_of_sum**2 - sum_of_squares
print("Difference: " + str(diff))
