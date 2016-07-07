/*
*greedy.c
*Author: onwuka gideon, dongidomed@gmail.com
*This program is a solution of the greedy problem set from
*pset1 of CS50.
*/
 
#include <stdio.h>
#include <math.h>
#include <cs50.h>
 
int main(void)
 
{
   /*initiating my variables*/
    int o,counter;
    float j;
 
   /*loop to get the valid input from the user*/
   printf("O hai! ");
   do {
 printf("How much change is owed?\n");
    j=GetFloat();
       }
    while(j<0);
       
       j=j*100;
      o=(int)round(j);
/*coins value*/
    int quaters,dimes,nickels,pennies;
    quaters=25;
    dimes=10;
    nickels=5;
    pennies=1;
    counter=0;
/* the real loops that counts the change owed*/
if(o>=quaters)
{
 
   do {
    o=o-quaters;
   counter=counter+1;
 
      }
      while(o>=quaters);
}
 
if(o>=dimes)
{
 
   do{
    o=o-dimes;
   counter=counter+1;
 
    }
      while(o>=dimes);
}
 
if(o>=nickels)
{
 
   do{
    o=o-nickels;
   counter=counter+1;
 
      }
      while(o>=nickels);
}
 
if(o>=pennies)
{
 
   do{
    o=o-pennies;
   counter=counter+1;
 
      }
      while(o>=pennies);
}
/*prints out the output*/
    printf("%d\n",counter);
return 0;
}
