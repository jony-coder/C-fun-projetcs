#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int hour, minute, second;
    hour = minute = second = 0;

    while(1){

        //clear output screen
        system("clear");

        //hh:mm:ss

        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t");
        printf("%.2d : %.2d : %.2d", hour, minute, second);

        //clear output buffer in gcc
        fflush(stdout);

        //incresing second
        second++;

        //updating time
        if(second==60){
            minute = minute + 1;

        }

        if(minute == 60){

            hour = hour + 1;
        }

        if(hour == 24 ){
            hour = 0;
            minute = 0;
            second = 0;
        }

        //wait until 1 sec;
        sleep(1);


    }


    return 0;
}
