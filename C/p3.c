#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x;
    int y;
    float z;
    float n;
    scanf("%d %d", &x, &y);
    scanf("%f %f", &z, &n);
    printf("%d %d\n", x+y, x-y);
    printf("%.1f %.1f\n", z+n, z-n);

    return 0;
}
