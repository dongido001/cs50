/*
*mario.c
*Author: Onwuka gideon, dongidomed@gmail.com
*This file is a solution of the mario pyramid problem from
*pset1 of CS50.
*/
#include <stdio.h>
#include <cs50.h>
int main(void)
 
{
//here i defined the variable that i will be using...
    int hash_counter,height_counter;
    int hash,height;
    hash=2;
    height_counter=0;
    string space=" ";
    int space_checker,space_help;
    /*getting a positive number not greater than 23*/
 
   do
    {
    printf("Height: ");
 
    height=GetInt();
    }
  while (height<0 || height>23);
        if (height == 0)
{
return 0;
}
 
/* loop that checks the height of the pyramid*/
space_checker=(height-1);
  while (height_counter<height)
 
  {
space_checker--;
space_help=0;
while(space_help<=space_checker)
     {
 
         printf("%s",space);
 
         space_help++;
     }
 hash_counter=0;
/*checks and prints the number of hashes*/
  while(hash_counter<hash)
{
    printf("#");
    hash_counter++;
}
hash++;
height_counter++;
printf("\n");
 
  }
return 0;
}
