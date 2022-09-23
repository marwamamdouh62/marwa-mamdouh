def power(base,n):
    result = 1
    for index in range(n):
        result = result *base
    return result

base= int(input("enter a number: "))
n = int(input("enter a power:  "))
print(str(power(base,n)))
