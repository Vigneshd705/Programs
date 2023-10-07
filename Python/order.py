size=str(input("Do you want?small/medium/large: "))
pepperoni=str(input("Do you want pepperoni? Y/N: "))
cheese=str(input("Do you want extra cheese? Y/N: "))
total_amount=0
if (size=="small"):
    total_amount=100
    if(pepperoni=='Y' or pepperoni=='y'):
        total_amount+=30
elif(size=="medium"):
    total_amount=200
    if(pepperoni=='Y' or pepperoni=='y'):
        total_amount+=50
elif(size=="large"):
    total_amount=300
    if(pepperoni=='Y' or pepperoni=='y'):
        total_amount+=50
if(cheese=='Y' or cheese=='y'):
    total_amount+=20
print(f"The total amount to be paid is {total_amount}")