n = int(input())

li = []

for i in range(n) :
    stu = input().split()
    li.append(stu)
    

# for stu in li :
#     print(stu[0], stu[1], stu[2], stu[3])

li.sort(key = lambda x : (-int(x[1]), int(x[2]), -int(x[3]), x[0]))

for stu in li :
    print(stu[0])