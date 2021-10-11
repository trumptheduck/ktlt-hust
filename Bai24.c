#include <stdio.h>

int main() {
    int input, zeros = 0, ones = 0;
    printf("Input a number: ");
    scanf("%d", &input);
    for (int i = 0; i < sizeof(int)*8; i++) {
        if (input&1) {
            ones++;
        } else {
            zeros++;
        }
        input >>= 1;
    }
    printf("There's %d zeros and %d ones\n",zeros,ones);
    return 0;
}