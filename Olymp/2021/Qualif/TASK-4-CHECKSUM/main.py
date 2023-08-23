def makeOnlyDigits(maincode):
    maincodenospace = maincode.replace(" ", "")
    rearranged = maincodenospace[4:] + maincodenospace[:4]

    alphabetlist = [
        "a","b","c","d","e","f","g","h","j","i","k","l","m",
        "n","o","p","q","r","s","t","u","v","w","x","y","z"
    ]

    onlydigit = ""
    for char in rearranged:
        far = char
        if far.lower() in alphabetlist:
            far = alphabetlist.index(far.lower()) + 10
        onlydigit += str(far)
    
    return onlydigit
    
codenumber = input("Enter number of code to input : ")
codes = []
for i in range (int(codenumber)):
    code = input(f"Enter code n.{i+1} : ")
    codes.append(code)
    
for code in codes:
    onlydigits = makeOnlyDigits(code)
    rest = int(onlydigits) % 97
    if (rest == 1):
        print("Ok")
    else :
        if (int(onlydigits[-2:]) - rest ) + 1 < 2:
            print(f"{code.replace(' ', '')[:2]}{int(onlydigits[-2:]) + (97 - rest) + 1}{code[4:]}")
        else :
            print(f"{code.replace(' ', '')[:2]}{int(onlydigits[-2:]) - rest + 1}{code[4:]}")