r, c = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(r)]

dp = [[0] * c for _ in range(r)]
dp[0][0] = a[0][0]

for i in range(r):
    for j in range(c):
        if i == 0 and j == 0:
            continue

        best = float('inf')

        if i:
            best = min(best, dp[i-1][j])
        if j:
            best = min(best, dp[i][j-1])
        if i and j:
            best = min(best, dp[i-1][j-1])

        dp[i][j] = a[i][j] + best

print(dp[-1][-1])
