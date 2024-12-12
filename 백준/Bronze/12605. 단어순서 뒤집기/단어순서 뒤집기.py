n = int(input())
for i in range(1, n+1):
    s = input().split()
    s.reverse()
    print(f'Case #{i}:', end=' ')
    for j in s: print(j, end=' ')
    print()