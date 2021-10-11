#include <stdio.h>

int main() {
    int input;
    int result = 0;
    printf("Input 5 numbers: \n");
    for (int i = 1; i<6; i++) {
        printf("n[%d]: ", i);
        scanf("%d",&input);
        if (input%2 != 0) {
            result += input;
        }
    }
    printf("Result: %d\n",result);
    return 0;
}