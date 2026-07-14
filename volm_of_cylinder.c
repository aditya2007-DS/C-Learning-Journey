#include<stdio.h>
int main(){
    int r,h;

    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("The volume of the cylinder with radius %d and height %d is: %f", r, h, 3.14*r*r*h);
    return 0;
}