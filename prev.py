def reverse(s):
  str = ""
  for i in s:
    str = i + str
  return str 
s = "Guvi"
 print ("original string  is : ",end="")
print (s)
print ("reversed string(using loops) is : ",end="")
print (reverse(s))

