def Biodata(YearOfBirth, MyName, From):
    current_year = 2026
    age = current_year - YearOfBirth

    print("Perkenalkan Nama Saya :", MyName)
    print("Umur Saya :", age)
    print("Saya Adalah Angkatan :", current_year)
    print("Asal Saya dari :", From)

YearOfBirth = int(input())
MyName = input()
From = input()

Biodata(YearOfBirth, MyName, From)