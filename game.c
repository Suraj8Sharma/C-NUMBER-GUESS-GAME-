#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){ 
    int guess,nattempts=1;
    int randomnumber;
    srand(time(0));
   randomnumber = rand()%10+1;
    // printf("%d",randomnumber);
    do
    {printf("guess the number\n ");
    scanf("%d",&guess);

    if (guess>randomnumber)
    {
        /* code */printf("guess lower number!\n");

    }
    else if (guess<randomnumber)
    {
        /* code */printf("guess higher number!\n ");

    }
    else
    {
        /* code */printf("you guessed the right number in %d attempts",nattempts);
    }
nattempts++;
    
    } while (guess!=randomnumber);
    
    return 0;
}