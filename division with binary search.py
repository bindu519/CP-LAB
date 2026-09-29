x, y = map(float, input().split())

if y == 0:
    print("Division by zero")
else:
    sign = -1 if (x < 0) ^ (y < 0) else 1

    x = abs(x)
    y = abs(y)

    low = 0
    high = max(1, x)

    while high - low > 1e-7:
        mid = (low + high) / 2

        if y * mid < x:
            low = mid
        else:
            high = mid

    print(sign * int(high))
