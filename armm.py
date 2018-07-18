l = int(input("Enter lower range: "))
u = int(input("Enter upper range: "))
 for num in range(l,u + 1):
   sum = 0
   temp = num
   while temp > 0:
       digit = temp % 10
       sum += digit ** 3
       temp //= 10
   if num == sum:
       print(num)
