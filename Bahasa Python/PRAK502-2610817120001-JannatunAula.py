def count(value1, value2):
    result = value1 - value2
    return mutlak(result)

def mutlak(number):
    if number < 0:
        return -number
    else:
        return number

a, c, b, d = map(int, input().split())
result = count(a, b) + count(c, d)
print(mutlak(result))