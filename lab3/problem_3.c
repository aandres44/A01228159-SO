#include <stdio.h>
#define Voltage 220
#define current 10

int main()
{
    float Resistor;
    Resistor = Voltage / current;
    printf("R = %6.2f \n", Resistor);
}
