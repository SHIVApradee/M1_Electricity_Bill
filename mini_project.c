#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "declare.h"
#include "urban.c"
#include "rural.c"
#include "industry.c"
#include "worship.c"


int main()
{
    int options;
    printf("press 1 for urban\npress 2 for rural\npress 3 for industry\npress 4 for public_worship\n");
    scanf("%d",&options);
    
    switch (options)
    {
    case 1:
        urban();
        break;
    case 2:
        rural();
        break;
    case 3:
        industry();
        break;
    case 4:
        public_worship();
        break;
    default:
        printf("Kindly enter the valid options!");
        break;
    }
}

void details()
{
    printf("Enter your area name:\n");
    scanf("%s", location);
    printf("Enter your Name:\n");
    scanf("%s", conu_Name);
    printf("Enter your Meter Number:\n");
    scanf("%d", &service_No);
    printf("Enter units consumed:\n");
    scanf("%d", &conu_Units);
    xy:
    printf("Enter email ID :\n");
    scanf("%s", conu_Email);
    char *res;
    res = strstr(conu_Email, "@gmail.com");
    if(!res)
    {
        printf("\n-----INVALID MAIL-ID!-----\n");
        goto xy;
    }
    printf("Enter the permanent address :\n");
    scanf("%s", conu_Address);
    x:
    printf("Enter the phone number : \n");
    scanf("%s", conu_Mob_No);
    if(strlen(conu_Mob_No)==10)
    {
        int i=0;
        while(i<10)
        {
            if(!(conu_Mob_No[i]<='9' && conu_Mob_No[i]>='0'))
            {
            printf("\n-----ENTER VALID NUMBER-----\n\n");
            goto x;
            }
        i++;
        }
    }
    else{
        printf("\n-----ENTER VALID NUMBER-----\n");
            goto x;
    }
}








