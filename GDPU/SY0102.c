#include <stdio.h>
int main() {
    double r, area;
    scanf("%lf", &r);
    area = 3.14 * r * r;
    printf("r=%lf\narea=%lf\n", r, area);
    return 0;
}