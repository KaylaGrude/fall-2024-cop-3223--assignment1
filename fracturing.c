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
   calculateDistance();
}

double distanceFormula()
{
    double x1, x2, y1, y2, x, y, distance;

    x = pow((x2-x1),2);
    y = pow((y2-y1),2);
    distance = sqrt(x-y);
    return distance;
}

double calculateDistance()
{
    double x1, x2, y1, y2;

    printf("Please enter x and y coordinates of point #1: ");
    scanf("%3lf %3lf", &x1, &y1);

    printf("Please enter x and y coordinates of point #2: ");
    scanf("%3lf %3lf", &x2, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    printf("The distance between the two points is %3lf\n", dist);

    return 0;
}
    