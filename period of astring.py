s = input().strip()
n = len(s)

for p in range(1, n + 1):
    if n % p == 0:
        prefix = s[:p]

        if prefix * (n // p) == s:
            print(p)
            break
