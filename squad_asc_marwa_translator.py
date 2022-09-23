def trans(phrase):
    translation = ""
    for letter in phrase:
        if letter.lower() in "auoie":
            if letter.isupper():
                translation = translation + "G"
            else:
                translation = translation + "g"
        else:
            translation = translation + letter
    return translation

print(trans(input("enter a phrase: ")))
