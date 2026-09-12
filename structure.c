class Student:
    def __init__(self):
        self.rollNo = 0
        self.name = ""
        self.marks = 0.0


student = Student()

student.rollNo = int(input("Enter roll number: "))
student.name = input("Enter name: ")
student.marks = float(input("Enter marks: "))

print("\n--- Student Details ---")
print("Roll Number:", student.rollNo)
print("Name:", student.name)
print(f"Marks: {student.marks:.2f}")
