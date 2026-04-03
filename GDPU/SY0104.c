#include <stdio.h>

int even(int n) {
    if (n % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int a,b;
    int sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++) {
        if (even(i)) {
            sum += i;
        }
    }
    printf("sum=%d\n", sum);
    return 0;
}