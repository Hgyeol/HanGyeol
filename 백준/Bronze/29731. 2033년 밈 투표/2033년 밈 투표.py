a = [   'Never gonna give you up',
        'Never gonna let you down',
        'Never gonna run around and desert you',
        'Never gonna make you cry',
        'Never gonna say goodbye',
        'Never gonna tell a lie and hurt you',
        'Never gonna stop'
    ]
n = int(input())
res=1
for i in range(n):
    s = input()
    if s not in a:
        res=0
if res==0:
    print("Yes")
else:
    print("No")