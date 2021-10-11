#include <stdio.h>
#include <math.h>

int main() {
    int input = 0;
    int days, years, weeks;
    printf("%s","Input the specified days: ");
    scanf("%d",&input);

    years = floor(input/365);
    weeks = floor((input-years*365)/7);
    days = input-years*365-weeks*7;

    printf("There's %d days, %d weeks, %d years in %d days\n",days,weeks,years,input);
    return 0;
}
