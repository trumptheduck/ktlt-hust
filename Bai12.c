#include <stdio.h>
#include <math.h>

typedef struct BankNoteStruct
{
    int amount;
    int value;

} BankNote;

int main() {
    long amount = 0;
    printf("Input the amount you want to exchange: ");
    scanf("%ld",&amount);
    BankNote banknotes[9] = {{0, 1000}, 
                            {0, 2000},
                            {0, 5000},
                            {0, 10000},
                            {0, 20000},
                            {0, 50000},
                            {0, 100000},
                            {0, 200000},
                            {0, 500000}};
    printf("Seperated banknotes are: \n");
    for (int i = 8; i >= 0; i--) {
        banknotes[i].amount = floor(amount/banknotes[i].value);
        amount -= banknotes[i].value*banknotes[i].amount;
        if (banknotes[i].amount > 0) {
            printf("%d VND is %d bills\n",banknotes[i].value, banknotes[i].amount);
        }
        if (amount < 1000) {
                break;
        }
    }
    return 0;
}