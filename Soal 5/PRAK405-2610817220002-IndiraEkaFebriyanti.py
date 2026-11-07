n, kelipatan = map(int, input().split())

total_keseluruhan = 0

for i in range(1, n + 1):
    jumlah_baris = 0

    for j in range(i, 0, -1):
        kali = j * kelipatan
        jumlah_baris += kali

        print(f"({j} * {kelipatan})", end="")
        if j < 1:
            print(" + ", end="")

    print(f" = {jumlah_baris}")
    total_keseluruhan += jumlah_baris

print(total_keseluruhan)