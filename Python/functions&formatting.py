#function without return type
def add(n1,n2):
    global sum
    sum=n1+n2
num1=int(input("Enter the number1: "))
num2=int(input("Enter the number2: "))
add(num1,num2)
print("The sum of {} and {} is {}".format(num1,num2,sum))

#function with return type
def add(n1,n2):
    return n1+n2
num1=int(input("Enter the number1: "))
num2=int(input("Enter the number2: "))
sum=add(num1,num2)
print(f"The sum of {num1} and {num2} is {sum}")
