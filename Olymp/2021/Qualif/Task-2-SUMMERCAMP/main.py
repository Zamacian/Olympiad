print("Olympiad 2021 , Qualification , Task 2 -> 'SUMMERCAMP'")

kidnumber = int(input("Enter number of kids : "))
kidlist = []
for i in range(kidnumber):
    kid = input(f"Kid n.{i+1} : ")
    kidlist.append(kid)
    
letterlist_1 = []
for kid in kidlist:
    letterlist_1.append(kid[0].upper())
    
letterlist_2 = []
characterlist = [
    "a","b","c","d","e","f","g","h","i","j","k","l","m",
    "n","o","p","q","r","s","t","u","v","w","x","y","z"
]
for character in characterlist:
    if (letterlist_1.count(character.upper()) >= 5):
        letterlist_2.append(character.upper())
        
if letterlist_2 == [] : letterlist_2.append("/")

print("Activities organized for : " , letterlist_2)