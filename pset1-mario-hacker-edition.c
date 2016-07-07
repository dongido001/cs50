/*
By Onwuka Gideon
dongidomed@gmail.com
 
mario hacker edition pset1...
 
-==greets all my freinds.==-
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
 
int main()
{
//get int from the user...
printf("Height : ");
int height;
do
{
height = GetInt();
}
while( height < 1 || height > 23);
 
for(int m = 0; m< height ; m++) //loop for the height
{
     //print space...
      for(int r=0;r<(height - (m +1)); r++)
         {
           printf(" ");
         }
      //print #s
      for(int i = 0 ; i <  (m) ; i++)
        {
          printf("#");
   
         }
     //print two middile space..
   printf("  ");
    for(int i = 0 ; i <  (m) ; i++)
        {
          printf("#");
   
         }
printf("\n");
   
}
 
return 0;
}
