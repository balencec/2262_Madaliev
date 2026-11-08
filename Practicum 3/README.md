### Задание 1. Первый класс
```py
import math

n = int(input())
q = math.ceil(n / 25)
w = math.floor(n / q)

print(q, w, sep=" ")
```

### Задание 2. Двоичная запись
```py
t = int(input())

for a in range(t):
    n = int(input())
    p, q = map(int, input().split())
    rez = "0."
    for b in range(n):
        p *= 2
        w = p // q
        rez += str(w)
        p %= q
    print(rez)
```

### Задание 4. Универсальный префиксный код
```py
n = int(input())
n2 = list(map(int, input().split()))

res = ""
for x in n2:
    xb = bin(x)[2:]
    y = len(xb)
    yb = bin(y)[2:]
    z = len(yb)

    q1 = "0" * (z - 1)
    q2 = yb
    q3 = xb[1:]
    res += (q1 + q2 + q3)
print(res)
```
