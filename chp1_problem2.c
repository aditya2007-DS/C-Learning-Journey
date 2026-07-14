#include<stdio.h>
int main(){
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle with radius %d is %f", radius, 3.14*radius*radius);
    return 0;
}