#include <stdio.h>

int main() {
    int a;
    printf("Enter marks: ");
    scanf("%d", &a);

    if (a >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}

