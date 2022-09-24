secretname = "marwa"
guess = ""
count = 0
limit = 3
flag = False

while guess != secretname and not(flag) :
    if count<limit:
        guess=input("enter a name: ")
        count = count + 1
    else:
        flag = 1


if flag:
    print("Out of guesses, YOU LOSE!")
else:
    print("YOU WIN!")
