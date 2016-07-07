/** Pset2
*vigenere.c
*By onwuka gideon
*dongidomed@gmail.com
*this program encrypts texts as per a given key...
* April 2015
**/
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
 
int main(int argc,string argv[])
{
 if(argc==1 || argc>2)
            {
             printf("Usage: ./vigenere keyword\n");
             return 1;
            }
//make sure key word is an alphabet...
string key=argv[1];
int lkey=strlen(argv[1]);
 
int u=0;
//exit if user puts a non alphabet as a key...
     for(int i=0;i<lkey;i++)
     {
       if(!isalpha(key[i]))
         {
          return 1;
             }
     }
string text=GetString();
int ltext=strlen(text);
      for(int i=0;i<ltext;i++)
        {
            int c=0;
            if(lkey==u)
                  {
                   u=0;
                  }
                  
         if(isalpha(text[i]))
         {     
             if(isupper(key[u]))
                {
                 c=key[u]-'A';
                c=(int)text[i]+c;
                  if((c >'A') && (c >'Z'))
                      {
                      c=c-26;
                      }
               printf("%c",(char)c);
                }
              else
                  {
                  c=key[u]-'a';
                c=(int)text[i]+c;
                    if((c >'a') && (c >'z'))
                      {
                      c=c-26;
                      }
               printf("%c",(char)c);
                  }
             u++;
          }
        else
            {
            printf("%c",text[i]);
            } 
        
        }
    printf("\n");
    return 0;
}
