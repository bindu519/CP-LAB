from collections import deque

n, m = map(int, input().split())

a = []
q = deque()
fresh = 0

for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)

    for j in range(m):
        if row[j] == 2:
            q.append((i, j))
        elif row[j] == 1:
            fresh += 1

time = 0

while q and fresh > 0:
    size = len(q)

    for _ in range(size):
        i, j = q.popleft()

        # Up
        if i > 0 and a[i-1][j] == 1:
            a[i-1][j] = 2
            fresh -= 1
            q.append((i-1, j))

        # Down
        if i < n-1 and a[i+1][j] == 1:
            a[i+1][j] = 2
            fresh -= 1
            q.append((i+1, j))

        # Left
        if j > 0 and a[i][j-1] == 1:
            a[i][j-1] = 2
            fresh -= 1
            q.append((i, j-1))

        # Right
        if j < m-1 and a[i][j+1] == 1:
            a[i][j+1] = 2
            fresh -= 1
            q.append((i, j+1))

    time += 1

if fresh == 0:
    print(time)
else:
    print(-1)
