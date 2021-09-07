
#include "foo.h"

#include<stdio.h>
#include<stdlib.h>

 /**
 * @brief Line function is for graphic design of the program 
 *
 */

void align(){
        for(i=0;i<=b;i++){
            printf("-");

        }    
}


 /**
 * @brief   Takes Input of Various Expenses and Input Data 
 *
 */

 
void data(){
        printf("Please Enter Your Name");
        gets(name);

        printf("\nEnter Your Monthly Salary ");

        gets(month);

        printf("\nCash Spent on Eatting outside");
        scanf("%f",&food);

        printf("\nCash spent on Mobile phone");
        scanf("%f",&mobile);

        printf("\n Cash Spent on Outing  ");
        scanf("%f",&outing);

        printf("\n Cash spent on travelling ");
        scanf("%f",&bike);

        printf("\n Other Expenses");
        scanf("%f",&paybills);

        printf("\n Monthy Salary ");
        scanf("%f",&sal);

        printf("\n Money made from multi source ");
        scanf("%f",&multi);
      

 }




/**
 * @brief  for calculation of the budget with the data given by user
 *
 */

 void analyse(){
     
        totalcredit=food+mobile+outing+bike+paybills;
        totaldebit=sal+multi;
        total_amount=totaldebit-totalcredit;
 }




/**
 * @brief  Show fuction will give the Analysis of the CASHINFLOW AND CASHOUTFLOW
 *
 */


void show(){
    align();

    printf("\nCASHFLOW ANALYSIS\n");

    align();

    printf("\n");   

    printf("\t\t\t\tCASHOUTFLOW\t\t\tCASHINFLOW\n");

    printf("\nEATING OUTSIDE\t\tRs% .2f",food);
    printf("\nMOBILE AND DATA\t\tRs% .2f",mobile);
   

        printf("\n\n");
        printf("Entertainment   \t\tRs% .2f" ,outing);
        printf("\nTransportation   \t\tRs% .2f" ,bike);
        printf("\nMonthly Bills   \t\tRs% .2f",paybills);

        printf("\n");

        printf("\n\n From Other sources of Income\t\t\t\tRs% .2f",multi);

        printf("\n\nYour Monthly Salary\t\t\t\t\tRs% .2f",sal);


        printf("\n\n");

        align();

        printf("\n");

        printf("Total(Credit and Debit)\t\tRs%.2f\t\tRs%.2f",totalcredit,totaldebit);
        printf("\n");

        printf("\n ANALYSIS OF SAVINGS \t\tRs%.2f",total_amount);


        printf("\n");
        printf("\n");
       // printf("Basic Pay: %f\n",basicPay);
      //  printf("Employee contribution: %f\n",employeeFund);
      //  printf("Employer Contribution: %f\n",employerFund);

        align();

}
