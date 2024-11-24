#include <stdio.h>

int matchsticksGame(int N) {
    return (N % 5 == 0) ? -1 : (N % 5);  
}

int main() {
    int N;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &N);
    
    int result = matchsticksGame(N);
    if (result == -1)
        printf("It is impossible for A to guarantee a win.\n");
    else
        printf("A should pick %d matchsticks on the first turn.\n", result);
    
    return 0;
}
