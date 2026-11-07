a, b = map(int, input().split())

awal_a = a
awal_b = b

if a < b:
    while a <= awal_b and b >= awal_a:
        print(f"{a} {b}", end="")
        if a < awal_b:
            print(" - ", end="")
        a += 1
        b -= 1
else:
    while a >= awal_b and b <= awal_a:
        print(f"{a} {b}", end="")
        if a > awal_b:
            print(" - ", end="")
        a -= 1
        b += 1