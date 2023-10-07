list=[1,2,3]
num=2

try:
    print(list[2])
except NameError:
    print("Variable is not defined")
except IndexError:
    print("Index out of range")
else:
    print("Code is successfully executed")