print("Assignment 1")
for i in range(0,5):
    print("* * * * *")

print("\nAssignment 2")

def generate_equilateral_triangle():
    num_rows = 5
    numbers = [str(i) for i in range(1, 6)]
    max_length = len(numbers[-1])
    for i in range(num_rows):
        print(" " * ((num_rows - i - 1) * (max_length // 2)), end="")
        for j in range(i + 1):
            print(numbers[j].rjust(max_length), end=" ")
        print()
generate_equilateral_triangle()

print("\nAssignment 3")

def print_x_pattern(size):
    for i in range(size):
        for j in range(size):
            if i == j or i + j == size - 1:
                print("*", end=" ")
            else:
                print(" ", end=" ")
        print()
size = 5
print_x_pattern(size)
