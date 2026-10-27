#include <stdio.h>

void Biodata(int YearOfBirth, char MyName[], char From[]) {
    int current_year = 2026;
    int age = current_year - YearOfBirth;

    printf("Perkenalkan Nama Saya : %s\n", MyName);
    printf("Umur Saya : %d\n", age);
    printf("Saya Adalah Angkatan : %d\n", current_year);
    printf("Asal Saya dari : %s\n", From);
}

int main() {
    int YearOfBirth;
    char MyName[20], From[15];

    scanf("%d", &YearOfBirth);
    scanf(" %[^\n]", MyName);
    scanf(" %[^\n]", From);

    Biodata(YearOfBirth, MyName, From);

    return 0;
}