import math
def squares(a, b):
    x = int(math.sqrt(a))
    x = x + 1
    res = 0
    while (x*x <= b):
        res += 1
    return res
