#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches %= 12;
    return result;
}

int main() {
    struct Distance d1, d2, sum;

    printf("Enter feet and inches for the first distance: ");
    scanf("%d %d", &d1.feet, &d1.inches);

    printf("Enter feet and inches for the second distance: ");
    scanf("%d %d", &d2.feet, &d2.inches);

    sum = addDistances(d1, d2);

    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}
