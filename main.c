#include <stdio.h>

int digit(int n, int k){
    int digits[100] = {0};
    int i;
    for(i = 0; n != 0; i++){
        digits[i] = n % 10;
        n /= 10;
    }
    if(k > i+1)
        return 0;
    else
        return digits[k-1];
}

int main(void){
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    printf("%d\n", digit(n, k));

    return 0;
}
