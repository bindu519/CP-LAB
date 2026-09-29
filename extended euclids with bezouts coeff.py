a, b = map(int, input().split())

def egcd(a, b):
    if b == 0:
        return a, 1, 0

    d, x, y = egcd(b, a % b)
    return d, y, x - (a // b) * y

d, x, y = egcd(a, b)

bx, by = x, y
best = abs(x) + abs(y)

for k in range(-10, 11):
    nx = x + k * (b // d)
    ny = y - k * (a // d)

    if abs(nx) + abs(ny) < best:
        bx, by = nx, ny
        best = abs(nx) + abs(ny)
    elif abs(nx) + abs(ny) == best and nx <= ny:
        bx, by = nx, ny

print(bx, by, d)
