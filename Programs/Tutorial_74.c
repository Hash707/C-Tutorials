// Author : hash707
// Date : 21 July 2023
// Purpose : Area of Circle Exercise (Code with harry)


#include<math.h>
#include<stdio.h>
#define PI 3.14159;

double eDistance(int x1, int y1, int x2, int y2){

    int bSqrt = pow((x2-x1),2) + pow((y2-y1),2);
    printf("bsqrt %f", bSqrt);
    printf("The distance is %.2f", sqrt(bSqrt));
    return sqrt(bSqrt);
}


double areaCircle(double (*ptr)(int,int,int,int), int x1, int y1, int x2, int y2){

    return pow(ptr(x1,y1,x2,y2), 2) * PI;
}


int main(){

    int x1,x2,y1,y2;
    printf("Enter the x1 coordinate : ");
    scanf("%d", &x1);

    printf("Enter the y1 coordinate : ");
    scanf("%d", &y1);

    printf("Enter the x2 coordinate : ");
    scanf("%d", &x2);

    printf("Enter the y2 coordinate : ");
    scanf("%d", &y2);

    // Declaring and initializing the ptr
    double (*ptr)(int, int, int, int);
    ptr = eDistance;

    printf("The area of the circle is %.2f", areaCircle(ptr, x1, y1, x2, y2));

    return 0;
}