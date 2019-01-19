#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int i, digit, sum = 0;
    scanf("%d", &n);
    i = n;
    while(i > 0){
        digit = i%10;
        sum += digit;
        i /= 10;
    }
    printf("%d", sum);
    return 0;
}
