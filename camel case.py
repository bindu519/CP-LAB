n = int(input())

words = input().split(',')

pattern = input()

result = []

for word in words:
    abbreviation = ""

    for ch in word:
        if ch.isupper():
            abbreviation += ch

    if abbreviation.startswith(pattern):
        result.append((abbreviation, word))

if len(result) == 0:
    print("No match found")
else:
    result.sort()

    for abbreviation, word in result:
        print(word)
