import math
def right_angled_triangle(height):
    for i in range(0,height):
        for k in range(0,i+1):
            print("*",end='')
        print(" ")
    print("\n")

def triangle(height):
    k = height - 1
    for i in range(0, height):
        for j in range(0, k):
            print(end=" ")
        k = k - 1
        for j in range(0, i+1):
            print("* ", end="")
        print("\n")
    
def square(height):
    for i in range(height):
        for k in range(height):
           print("*", end = ' ')
        print(" ")
    print("\n") 

def circle(height):
    for i in range (0,2*height+1):
        for k in range (0,2*height+1):
           if (math.pow(i-height,2)+math.pow(k-height,2) <= math.pow(height,2)+1):
              print("*", end=" ")
           else: 
                print(" ", end=" ")
           print(" ")
        print("\n")


z= int(input("enter how many shape: "))
all_2= []
y=1
while y<=z:
    print("select a shape: ")
    print("1-right angled triangle")
    print("2-pyramid")
    print("3-square")
    print("4-circle")
    shape=int(input("Shape number: "))
    height=int(input("enter height: "))
    all_1 =(shape,height)
    all_2.append(all_1)

    y=y+1

sort= sorted(all_2,key=lambda t: t[1])
l=0
for l in range(0,len(sort)):
    if sort[l][0] ==1:
        right_angled_triangle(sort[l][1])
    elif sort[l][0] == 2:
        triangle(sort[l][1])
    elif sort[l][0] == 3:
        square(sort[l][1])
    elif sort[l][0] == 4:
        circle(sort[l][1])

list.sort(sorted)
