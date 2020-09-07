testCases = int(input())

while testCases > 0:
    testCases -= 1
    a, b, x, y, n = [int(x) for x in input().split()]

    if max(a-n, x) > max(b-n, y):
        a, b = b, a
        x, y = y, x

    p = max(a-n, x)
    n = n-(a-p)
    q = max(b-n, y)
    print(p*q)