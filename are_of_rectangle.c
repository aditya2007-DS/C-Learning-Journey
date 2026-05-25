#include<stdio.h>
int main(){
    int length;
    int breadth;
    int area;

    printf("Enter the length of the rectangle: ", length);
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ", breadth);
    scanf("%d", &breadth);
    printf("The area of the rectangle is: %d", length*breadth);
    

    return 0;
}