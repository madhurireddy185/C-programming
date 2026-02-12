#include <stdio.h>
int main() {
    int N;
    int sum = 0;
    int i;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        sum += i; 
    }
    printf("%d\n", sum);

    return 0;
}
