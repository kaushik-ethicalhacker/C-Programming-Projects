#include <stdio.h>

#define PAYRATE 12.00
#define TAX_300 0.15
#define TAX_150 0.20
#define TAX_450 0.25
#define OVERTIME 40


int main()

{
    int hours = 0;
    double gross_pay = 0.0;
    double total_taxes = 0.0;
    double net_pay = 0.0;
    
    printf("Please enter the number of hours worked: ");
    scanf("%d",&hours);
    
    if (hours <= 40){
        gross_pay = hours * PAYRATE;
    }
    else{
        gross_pay = 40 * PAYRATE;
        gross_pay += (hours - 40) * (PAYRATE * 1.5);
    }
    
    if (gross_pay <= 300){
        total_taxes = 300 * TAX_300;
    }
    else if (300 < gross_pay && gross_pay <= 450){
        total_taxes = 300 * TAX_300;
        total_taxes += (gross_pay - 300)* TAX_150;
    }
    else if ( gross_pay > 450){
        total_taxes = 300 * TAX_300;
        total_taxes += 150 * TAX_150;
        total_taxes += (gross_pay - 450) * TAX_450;
    }
    
    net_pay = gross_pay - total_taxes;
    
    printf("\nGross Pay: %.2f", gross_pay);
    printf("\nTotal Tax: %.2f", total_taxes);
    printf("\nNet Pay: %.2f",net_pay);
    
    return 0;
}