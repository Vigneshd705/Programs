num=int(input())
str=[]
list=[]
for i in range (num):
    str.append(input())
print(str)
for i in str:
    ls=i.split(" ")
    list.extend(ls)
print(list)