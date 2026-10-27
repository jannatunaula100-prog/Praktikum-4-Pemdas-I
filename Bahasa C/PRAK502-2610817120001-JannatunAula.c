#include <stdio.h>
#include <math.h>

int count(int value1, int value2) {
    int mutlak(int number);
    int result;
    result = value1 - value2;
    return mutlak(result);
}

int mutlak(int number) {
    if (number < 0) {
        return -number;
    }
    else {
        return number;
    }
}

int main() {
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int result = count(a, b) + count(c, d);
    printf("%d", mutlak(result));

    return 0;
}