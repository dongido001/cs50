

/**
*cs50 problem set2, initials.c
*By Onwuka Gideon...email==dongidomed@gmail.com
*Quote: Nothing is impossible...
*April 2015
**/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//am make bellow variables global...
 int y=1,z=1;
 int count=0;
 string c1;
 int lenght;
 int v=1;
int main(void)
{
 
c1=GetString();
 
// check user input..
  //get lenght of text
lenght=strlen(c1);
//loop through the text
for(int f=0;f<lenght;f++)
  {
  if(c1[f]!=' ' && !isalpha(c1[f]))
     {
     printf("Invalid input detected :\n");
     return 1;
     }
  }
  //Does the printing out...
printf("%c",toupper(c1[0]));
       while(count <lenght)
   {
     if(c1[y]==' ')
        {
        printf("%c",toupper(c1[y+1]));
        z=z+1;
        }
 count++;
  y++;       
   } 
printf("\n");
 
} 
