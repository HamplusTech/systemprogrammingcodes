#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    printf("Enter the maximum multiplication times you need\n");
    int n;
    scanf("%d", &n);
    //printf("%d", n);
    for (int a = 1; a<=n; a++){
        printf("%d times\n", a);
        for (int b = 1; b <=12; b++){
            int result = a*b;
            printf("%d * %d = %d\n", a, b, result);
        }
        printf("\n");
    }
}
