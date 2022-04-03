#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "declare.h"

float amount;
void urban()
{
    details();
    conu_Units;
    if(conu_Units >=0 && conu_Units <=100)
    {
        amount = conu_Units * 3.50; //3.50 in rupees
    }
    else if(conu_Units >= 101 && conu_Units <= 200)
    {
        amount = conu_Units * 4.70;
    }
    else if(conu_Units >= 201 && conu_Units <= 500)
    {
        amount = conu_Units * 6.90;
    }
    else
    {
        amount = conu_Units * 7.20;
    }
    printf("\n=====================================");
    printf("\n  ********ELECTRICITY BILL********");
    printf("\n=====================================\n");
    printf("Name                    : %s\n", conu_Name);
    printf("Meter Number            : %d\n", service_No);
    printf("Units consumed per month: %d\n", conu_Units);
    printf("Total Amount            : %.2f\n", amount);
    printf("\n======================================");
    printf("\n  **********THANK YOU**********\n");
    printf("======================================\n");
    
}