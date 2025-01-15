#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 1
    int unit_price = 1500;
    int quantity = 2000;

    int total_cost = unit_price * quantity;

    printf("The total cost for %d items at UGX %d each is: UGX %d\n", quantity, unit_price, total_cost);

//2

    int hourly_wage = 2500;
    int hours_worked = 16000;

    int monthly_salary = hourly_wage * hours_worked;

    printf("The monthly salary for working %d hours at UGX %d per hour is: UGX %d\n", hours_worked, hourly_wage, monthly_salary);

    return 0;
}
