#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "declare.h"

void public_worship()
{
    details();
    float amount=0;
    int cont_Load ;
    printf("\nEnter the contracted load(kw): \n");
    scanf("%d", &cont_Load);
    if(cont_Load<=12)
    {
    if(conu_Units >=0 && conu_Units <=120)
    {
        amount = conu_Units*5.75; // 5.57 in rupees
    }
    else
    {
        amount =  conu_Units*6.25;
    }
    printf("Enter the Site Name:\n");
    scanf("%s", &site_Name);
    printf("\n=====================================");
    printf("\n  ********ELECTRICITY BILL********");
    printf("\n=====================================\n");
    printf("Site Name               : %s\n", site_Name);
    printf("Meter Number            : %d\n", service_No);
    printf("Units consumed per month: %d\n", conu_Units);
    printf("Total Amount            : %.2f\n", amount+cont_Load*120);
    printf("======================================");
    printf("\n  **********THANK YOU**********\n");
    printf("======================================\n");
    }
    else{
        printf("\n-----EXCEEDED THE CONTRACTED LOAD-----\n");
    }
}