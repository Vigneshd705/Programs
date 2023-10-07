nm1=str(input("Enter  your name: "))
nm2=str(input("Enter  your  partner name: "))
fcount=0
lcount=0
name1=nm1.lower()
name2=nm2.lower()
for i in name1:
    if i in ['t','r','u','e']:
        fcount+=1
    if i in ['l','o','v','e']:
        lcount+=1
for i in name2:
    if i in ['t','r','u','e']:
        fcount+=1
    if i in ['l','o','v','e']:
        lcount+=1
score=str(fcount)+str(lcount)
print(f"Your score percentage is {score}%")