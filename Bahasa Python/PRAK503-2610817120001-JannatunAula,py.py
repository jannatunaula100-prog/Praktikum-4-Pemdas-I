def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

limit = 0
maks = -100000
minim = 100000

number = int(input())
value = list(map(int, input().split()))
while limit < number:
    maks = maksimal(maks, value[limit])
    minim = minimal(minim, value[limit])
    limit += 1

print(maks, minim)