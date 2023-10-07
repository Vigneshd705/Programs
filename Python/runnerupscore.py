num=int(input())
str=str(input())
ls=[]
list=str.split(" ")
for i in list:
    ls.append(int(i))
print(ls)
maximum=max(ls)
while(1):
    if maximum in ls:
        ls.remove(maximum)
    else:
        break
print(max(ls))