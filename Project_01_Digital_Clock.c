#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int main ()
{
    int Hour,Minute,Second;
    printf("Set Your Time:\n");
    scanf("%d%d%d%d",&Hour,&Minute,&Second);
    if(Hour > 12 || Minute > 60 || Second > 60)
    {
        printf(" Error! ");
        exit(0);
    }
    while(1)
    {
        system("cls");
        fflush(stdout);
        Second++;
        if(Second > 59)
        {
            Minute++;
            Second = 0;
        }
        if(Minute > 59)
        {
            Hour++;
            Minute = 0;
        }
        if(Hour > 12)
        {
            Hour = 1;
        }
        printf("*** Digital Clock ***\n");
        printf("\n   %.2d : %.2d : %.2d",Hour,Minute,Second);
        if(Hour < 12 && Minute <= 59)
        {
            printf("  PM ");
        }
        else 
        {
            printf("  AM");
        }
        sleep(1);
    }
    return 0;
}