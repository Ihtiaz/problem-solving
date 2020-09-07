testCases = int(input())

for t in range(testCases):
    word = input()
    wordLength = len(word)

    if wordLength <= 10:
        print(word)
    else:
        print(word[0] + str(wordLength-2) + word[-1])