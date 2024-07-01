#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
  void ASCII(int n,int *j,char *string)
  {
  int rev=0;
      //printf("\nval of n=%d",n);
   while(n>0){
     rev*=10;
     rev+=(n%10);
     n/=10;
   }
   //printf("\nvalue of rev=%d",rev);
   while(rev>0){
   //printf("\nval of digit=%c",rev%10+48);
   string[*j]=(rev%10)+48;(*j)++;
   rev/=10;
   }
    --(*j);
  }
char *encrypt_this(const char *str)
{
    int size=strlen(str);
  char string[100];
  int i=0,j=0;
  while(str[i]){
    int n=0,sec=0;
    while(str[i]!=' '&&str[i]!='\0'){
      ++n;
      if(n==1)
     ASCII(str[i],&j,string);
      else
        {
        if(n==2) sec=j;
      string[j]=str[i];
         }
      j++;i++;
      }
    string[j]=str[i];
    if(n>1){
    char temp=string[sec];
    string[sec]=string[j-1];
    string[j-1]=temp;
    }
  j++;i++;
    }
  string[j]='\0';
  return string;
  }

 int main()
 {
   printf("\nEncrypted string=");
   puts(encrypt_this("Ajhjlkjhlk"));
   getch();
   return 0;
   }