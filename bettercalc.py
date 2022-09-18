n1= float(input("enter first number: "))
op= input("enter an operation: ")
n2= float(input("enter second number: "))

if op == "+" :
   print(n1 + n2)
elif op == "-":
   print(n1 - n2)
elif op == "*":
   print(n1 * n2)
elif op == "/":
   print(n1 / n2)
else: 
    print("invalid")