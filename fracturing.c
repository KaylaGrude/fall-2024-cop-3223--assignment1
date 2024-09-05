#include <stdio.h>
#include <math.h>

double distanceFormula();
double calculateDistance();
// double calculatePerimeter();
// double calculateArea();
// double calculateWidth();
// double calculateHeight();
   
int main(int argc, char **argv)
{
   
}

double distanceFormula()
{
    double x1, x2, y1, y2, x, y;

    x = pow((x2-x1),2);
    y = pow((y2-y1),2);
    return sqrt(x-y);
    
}

double calculateDistance()
{
    double x1, x2, y1, y2;

    printf("Please enter x and y coordinates of point #1: ");
    scanf("%1f, %1f", &&x1, &&y1);

    printf("Please enter x and y coordinates of point #2: ");
    scanf("%1f, %1f", &&x2, &&y2);

    printf("Point #1: (%1f, %1f)\n",x1,y1 );
    printf("Point #2: (%1f, %1f)\n",x2,y2 );


    double dist = distanceFormula(x1, y1, x2, y2);

    return dist;
}
    