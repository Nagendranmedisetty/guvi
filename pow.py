def power(b,e):
    if(exp==1):
        return(b)
    if(e!=1):
        return(b*power(b,e-1))
b=int(input("Enter base: "))
e=int(input("Enter exponential value: "))
print("Result:",power(b,e))
