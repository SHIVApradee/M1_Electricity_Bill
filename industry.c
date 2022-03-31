#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "declare.h"

void industry()
{
    details();
    float amount=0;
    int cont_Load ; //contracted load
    a:
    printf("\nEnter the contracted load(kw): \n");
    scanf("%d", &cont_Load);
    if (cont_Load<=15)
    {
    if(conu_Units <=500 && conu_Units >= 0)
    {
        amount = conu_Units * 5.20; //5.20 is rupees
    }
    else if(conu_Units >= 501 && conu_Units <= 750)
    {
        amount = conu_Units * 5.75;
    }
    else if(conu_Units >= 751 && conu_Units <= 1000)
    {
        amount = conu_Units * 6.20;
    }
    else
    {
        amount = conu_Units * 6.75;
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
    printf("\n======================================");
    printf("\n  **********THANK YOU**********\n");
    printf("======================================\n");    
    }
    else 
    {
        printf("\n-----EXCEEDED THE CONTRACTED LOAD-----\n");
        goto a;
    }
    
}