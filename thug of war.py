from itertools import combinations

n = int(input())
arr = list(map(int, input().split()))

total = sum(arr)

# Group 1 must have n//2 people (or either size for odd n)
size = n // 2

minimum = float('inf')

for group in combinations(arr, size):
    group_sum = sum(group)
    other_sum = total - group_sum

    diff = abs(group_sum - other_sum)

    minimum = min(minimum, diff)

print(minimum)
