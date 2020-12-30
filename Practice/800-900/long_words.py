if __name__ == "__main__" :
    n = int(input())
    strings = []
    for i in range(0, n) :
        strings.append(input())
    for string in strings :    
        if len(string) > 10 :
            str2 = []
            str2.append(string[0])
            str2.append(str(len(string) -2))
            str2.append(string[-1])
            print("".join(str2))
        else:
            print(string)