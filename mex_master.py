for _ in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))

    sums = set()
    for i in range(n - 1):
        sums.add(a[i] + a[i+1])

    mex = 0
    while mex in sums:
        mex += 1

    print(mex)
