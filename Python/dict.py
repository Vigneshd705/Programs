dict={"Name":"Vignesh","Age":18}
dict["Country"]="India"
print(dict)
for i,j in enumerate(dict,1):
    print(f"{i}.{j}")
for i,j in dict.items():
    print(i,j)
students={
    "student1":{"Name":"Vignesh","Age":18},
    "student2":{"Name":"Hari","Age":18}
}
for i in (students["student1"]):
    print(i)
#print(students)