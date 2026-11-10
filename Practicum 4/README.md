### Задание 1. Простые числа
```py
n = int(input())
k = 0
x = 1
while k < n:
    x += 1
    prime = True
    for d in range(2, x):
        if x % d == 0:
            prime = False
            break
    if prime:
        k += 1
print(x)
```

### Задание 2. Мама Дяди Федора
```py
n = int(input())
a = list(map(int, input().split()))

s = set()
ans = n
for i in range(n):
    s.add(a[i])
    if len(s) == 3:
        ans = i + 1
        break
print(ans)
```

### Задание 3. Удаление буквы
```py
from string import ascii_lowercase

s = input()
best = ""
mx = 0
for c in ascii_lowercase:
    k = s.count(c)
    if k > mx:
        mx = k
        best = c
print(s.replace(best, ""))
```

### Задание 4. Качество пароля
```py
n = int(input())

for i in range(n):
    p = input()
    r1 = False
    r2 = False
    r3 = False
    r4 = False
    for c in p:
        if c in "1234567890":
            r1 = True
        if c in "qwertyuiop":
            r2 = True
        if c in "asdfghjkl":
            r3 = True
        if c in "zxcvbnm":
            r4 = True
    if r1 and r2 and r3 and r4:
        print("strong")
    else:
        print("weak")
```
