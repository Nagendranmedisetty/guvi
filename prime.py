def prime(n):
    return all([(n % j) for j in range(2, int(n**0.5)+1)]) and n>1
 
# Driver code
n = 41
if prime(n):
       print("Yes")
else:
    print("No")
