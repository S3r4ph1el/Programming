n = int(input())

num = None

for i in range(n):
    string = str(input())

    j = 0

    while j < len(string):
        if string[j].isupper():
            char = string[j]
            j += 1
            num = ''
            while j < len(string) and string[j].isdigit():
                num += string[j]
                j += 1
            print(char * int(num), end='')
    print()