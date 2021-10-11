#include <stdio.h>

int main() {
    char input;
    char vowels[5] = {'a','i','u','e','o'};
    printf("Input a character: ");
    scanf("%c",&input);
    for (int i = 0; i < 5; i++) {
        if (input == vowels[i]) {
            printf("Character %c is a vowel\n",input);
            return 0;
        }
    }
    printf("Character <%c> is a consonant\n",input);
    return 0;
}