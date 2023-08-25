/* WAP using functions that take the name of item , quantity , price and find the total cost*/
#include <stdio.h>

float Price();
void Change(float c);

int main()
{
   float r = Price();
    Change(r);
}

float Price()
{
    float price,qty,result;
    char item[100];
    printf("Enter the name of the item = ");
    scanf("%s",&item);
    printf("Enter the cost of the item = ");
    scanf("%f",&price);
    printf("Enter the quantity = ");
    scanf("%f",&qty);
    result = price*qty;
    printf("the Item is = %s \n",item);
    printf("the Total cost for the quantity %f is %f\n",qty,result);
    return result;
}

void Change(float c)
{
    float money,balance;
    printf("Enter the amount given by the customer = ");
    scanf("%f",&money);
    balance = money - c;
    printf("The balance should be returned is %f",balance);
}