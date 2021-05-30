#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#include "functions.h"

char *getPassword(char *srn)
{
  char *newPass = (char *)malloc(sizeof(char)*7);
  char *rePass = (char *)malloc(sizeof(char)*7);
  int cmpValue=1;
  while(cmpValue)
  {
    printf("Enter Password -> 6 characters \n");
    scanf("%s",newPass);
    printf("Re-enter password\n");
    scanf("%s",rePass);
    cmpValue=strncmp(newPass, rePass, 7); 
  }
  return (SentenceEncrypt(newPass,SRNshift(srn)));
}