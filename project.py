import random as r 
words=["apple","glass","cat","game","month","shirt","house","key","table","pen"]
trials=8
def choosing_word(): #fn to choose a random word from hardcoded words list 
    chosen=r.randint(0,len(words)-1)
    return words[chosen]
def display_word(word): #fn to display the word as blank and number of trials 
    display=""
    for i in range (len(word)):
        display=display+"_"  
    print("THE WORD IS",display,"\nTHE NUMBER OF TRIALS IS:",trials)    
def guessing(word):
    right_count =0
    count=0
    right_guessed=""
    guessed=""
    while (count<trials and right_count!=len(word)):
        guess=input("ENTER A LETTER:")
        while (guess.lower() in guessed):   #to check for duplicate guesses
            print("CAN'T USE DUPLICATE LETTER")
            guess=input("ENTER A DIFFERENT LETTER:")
        guessed=guessed+guess    
        if (guess.lower() in word):  #to check if letter in chosen word 
                for i in word:
                    if(i==guess):   #to check if the word has double letters
                       right_count +=1

                right_guessed+=guess
                print("RIGHT GUESS")
        else:              
            count+=1    
            print("WRONG GUESS")
            print("NUMBER OF GUESSES LEFT",trials-count)
    else:
        if (right_count==len(word))and (count<trials):
            print("YOU WIN")
            print("THE WORD IS:",word) 
        else: #if user ran out of trials and didn't get the right word
            print("YOU LOST")
           
word=choosing_word()
display_word(word)
guessing(word)