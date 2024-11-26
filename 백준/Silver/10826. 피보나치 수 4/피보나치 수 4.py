arr = [0]*10001
arr[1] = arr[2] = 1
for i in range(3,10001):
    arr[i] = arr[i-1] + arr[i-2]
n = int(input())
print(arr[n])