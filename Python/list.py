list1=["fig","dates"]
list2=["apple","orange","pen","mango"]
list2.append(input("Enter the fruit name: "))
l=iter(list2)
print("Elements in list2 are: ")
for i in list2:
    print(next(l))
list2.extend(list1)
print("The elements in list1 are: ")
for k in iter(list1):
    print(k)
list1.clear()
list2.remove("pen")
list2.insert(0,"litchi")
list2.sort()
#list2.reverse()
#list.pop()
print("Elements in list2 after modification are: ")
for i,j in enumerate(list2,1):
    print (i,j)
print("Elements in list1 after modification are: ")
print(list1)
