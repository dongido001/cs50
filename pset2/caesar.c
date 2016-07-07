/**
 
*CS50 pset2 caesar.c
 
*By onwuka gideon
 
*dongidomed@gmail.com
 
*this program encrypts texts acording to numeical key provided.
 *April 2015
**/
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
 
int main(int argc,string argv[])
 
{
 
  if(argc==1 || argc>2)
            { 
            printf("Usage: ./caesar key\n");
return 1;
            }
int num ,a;
int counter;
string s;
a=atoi(argv[1]);
a=a%26;
s=GetString();
num=strlen(s);
counter=0;
int ci,c;
while(counter<num)
    {
 if ((s[counter]>=65 && s[counter]<=91) ||( s[counter]>=97 && s[counter]<=122))
      {
        ci = s[counter]+a;
      if((ci>=65 && ci<=91) ||( ci>=97 && ci<=122))
 
      {
   c=(char)ci;
printf("%c",c);
      }
    else if ((ci>91 || ci>122))
       {
  ci = ci-26;
   c=(char)ci;
printf("%c",c);
       }
 }
else
{
    printf("%c",s[counter]);
}
counter=counter+1;
    }
 printf("\n");
    return 0;
  }
