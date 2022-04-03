#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "declare.h"

float amount;
void rural()
{
    details();
    if(conu_Units <=100 && conu_Units >= 0)
    {
        amount = conu_Units * 2.50; //2.50 in rupees
    }
    else if(conu_Units >= 101 && conu_Units <= 200)
    {
        amount = conu_Units * 3.50;
    }
    else if(conu_Units >= 201 && conu_Units <= 500)
    {
        amount = conu_Units * 4.60;
    }
    else
    {
        amount = conu_Units * 6.80;
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