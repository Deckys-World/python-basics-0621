numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

lowest = numbers[0]

for num in numbers:
    if num < lowest:
        lowest = num

print("Lowest number:", lowest)
