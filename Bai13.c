#include <stdio.h>
#include <math.h>

int main() {
    int time = 0;
    int hours, minutes, seconds;
    printf("Input time to exchange(in seconds): ");
    scanf("%d", &time);
    hours = floor(time/3600);
    minutes = floor((time-hours*3600)/60);
    seconds = time - hours*3600 - minutes*60;
    printf("There's %dh %dm %ds in %d seconds\n",hours,minutes,seconds,time);
    return 0;
}