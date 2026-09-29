n = int(input())
arr = list(map(int, input().split()))
target = int(input())

arr.sort()

found = False

for i in range(n - 2):

    left = i + 1
    right = n - 1

    while left < right:

        s = arr[i] + arr[left] + arr[right]

        if s == target:
            print(arr[i], arr[left], arr[right])
            found = True
            left += 1
            right -= 1

        elif s < target:
            left += 1

        else:
            right -= 1

if not found:
    print("No Triplet Found")
