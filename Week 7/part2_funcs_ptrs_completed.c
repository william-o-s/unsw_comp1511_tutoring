// Part 2: Coding with Functions and Pointers
// Edited by William Setiawan (z5388080)
//  on 30/03/2023

#include <stdio.h>

void increment_time(int *days, int *hours, int *minutes);

int main(void) {
    int days = 3;
    int hours = 4;
    int minutes = 59;

    increment_time(&days, &hours, &minutes);

    printf(
        "Current time: %d days, %d hours and %d minutes",
        days,
        hours,
        minutes
    );

    return 0;
}


// increments the time by 1 minute
void increment_time(int *days, int *hours, int *minutes) {
    (*minutes)++;
    if (*minutes == 60) {
        *minutes = 0;
        (*hours)++;
    }

    if (*hours == 24) {
        *hours = 0;
        (*days)++;
    }

    // NOTE: does *minutes++ work?
}