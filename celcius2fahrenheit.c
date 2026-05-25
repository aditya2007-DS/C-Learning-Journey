#include<stdio.h>
int main(){
    float c, f;

    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);
    printf("The temperature in Fahrenheit is %f", ((9.0/5.0)*c + 32));
    return 0;
}