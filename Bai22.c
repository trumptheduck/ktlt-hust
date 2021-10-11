#include <stdio.h>

int main() {
    float result = 0;
    for (int i = 1; i < 51; i++) {
        result += 1.0/(i*2.0);
    }
    printf("Result: %f\n",result);
    return 0;
}