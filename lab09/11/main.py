def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

add = toint(lambda a, b: a + b)
print(add('2', '3'))

imax = toint(max)
print(imax('5', '40', '7'))

isum = toint(lambda *a: sum(a))
print(isum(*input().split()))
