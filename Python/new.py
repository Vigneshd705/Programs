num=int(input())
list=[]
ls1=[]
for i in range (num):
    str=" "
    str=(input())
    ls1=str.split(" ")
    list.extend(ls1)

print(list)
'''for i in str:
    ls=i.split(" ")
    list.extend(ls)
print(list)'''