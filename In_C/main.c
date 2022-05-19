#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */

/* Struct decleration */
struct Date{
    int Day;
    int Month;
    int Year;
}; // nested struct > Overhead struct Event
struct Time{
    int Hour;
    int Min;
    int Sec;
}; // nested struct > Overhead struct Event
struct Event{
    struct Date EventDate;
    struct Time EventTime;
}; // Overhead struct Event

int main(){
    /* Initializing Global Variables */
    struct Event myEvent[100];
    myEvent[0].EventDate.Day = 4;
    myEvent[0].EventDate.Month = 6;
    myEvent[0].EventDate.Year = 22;
    myEvent[0].EventTime.Hour = 15;
    myEvent[0].EventTime.Min = 20;
    myEvent[0].EventTime.Sec = 30;
    printf("myEvent[0] is Date: %d/%d/%d at %d:%d:%d\n", myEvent[0].EventDate.Day, myEvent[0].EventDate.Month, myEvent[0].EventDate.Year, myEvent[0].EventTime.Hour, myEvent[0].EventTime.Min, myEvent[0].EventTime.Sec);

    return 0;
}

/* Function Details */