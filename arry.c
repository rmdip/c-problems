#include <stdio.h>

int main()
 {
    double arr[5];
    int i;
    printf("5 ta double value input din:\n");
    for (i = 0; i < 5; i++) {
        scanf("%lf", &arr[i]);
    }
    printf("input value:\n");
    for (i = 0; i < 5; i++) {
        printf("%lf\n", arr[i]);
    }

    return 0;
}
