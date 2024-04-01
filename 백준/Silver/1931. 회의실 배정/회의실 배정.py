n = int(input())
arr = []
for _ in range(n):
    a = list(map(int,input().split()))
    arr.append(a)
arr.sort(key = lambda x : (x[1],x[0]))
now = arr[0][1]
count = 1
for i in range(1,len(arr)):
    if arr[i][0] >= now:
        count += 1
        now = arr[i][1]
print(count)