l=int(input("Enter the lower limit range:"))
u=int(input("Enter the upper limit range:"))
for i in range(l,u+1):
    if(i%2!=0):
        print(i)
