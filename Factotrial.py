n = int(input("Enter a number: "))
#this takes the input
factorial = 1

for i in range(1, n + 1):
    factorial *= i

print("Factorial:", factorial)
