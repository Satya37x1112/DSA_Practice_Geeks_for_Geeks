#include<stdio.h>
int area_of_rectangle(int length, int breadth){
    return length * breadth;
}
int main(){
    int length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Area of rectangle: %d\n", area_of_rectangle(length, breadth));
    return 0;
}