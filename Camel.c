#include <math.h>
#include <stdio.h>
#define PI 3.14159
struct camel 
{
  float height, length, radius, weight;
};
typedef struct camel Camel;
Camel input();
float find_weight(Camel c);
void Output(Camel c);
int main() 
{
   input(); 
}
Camel input() 
{
  Camel c;
  printf("Enter the height,weight,radius of  the camel\n");
  scanf("%f", &c.height);
  scanf("%f", &c.length);
  scanf("%f", &c.radius);
  find_weight(c);
}
float find_weight(Camel c) 
{
  c.weight = ((PI) * (pow(c.radius, 3))) * (sqrt(c.length * c.height));
  Output(c);
  return 0;
}
void Output(Camel c) 
{
  printf("The weight of the camel for %f height,%f length,and witha  stomach radius of %f is: %f\n", c.height, c.length, c.radius, c.weight);
}