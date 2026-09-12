numbers = [5, 2, 9, 1, 7]

lowest = numbers[0]

for num in numbers:
    if num < lowest:
        lowest = num

print(lowest)
