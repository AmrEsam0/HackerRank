#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char* temp;
    char time[11], sHours[13], nod[2];
    int hours;

    fgets(time, 11, stdin);
    strncpy(sHours, time, 2);
    hours = atoi(sHours);
    strncpy(nod, &time[8], 2);
    
    if(nod[0] == 'P'){
        if(hours != 12){
            hours += 12;
            sprintf(sHours, "%d", hours);
        }
    }else if(nod[0] == 'A'){
        if(hours == 12){
            hours = 0;
            sprintf(sHours, "0%d", hours);
        }
    }
    time[0] = sHours[0];
    time[1] = sHours[1];
    time[8] = '\0';
    printf("%s\n", time);


    return 0;
}