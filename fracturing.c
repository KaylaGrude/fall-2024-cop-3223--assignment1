#include <stdio.h>
#include <math.h>
#define pi 3.14159;

double distanceFormula();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
   
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    //askForUserInput();
    return 0;
}

double distanceFormula(double x1, double x2, double y1, double y2)
{
    double x = pow((x2-x1),2);
    double y = pow((y2-y1),2);
    double distance = sqrt(x-y);
    return distance;
}

double calculateDistance()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: ");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: ");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double distance = distanceFormula(x1, y1, x2, y2);

    printf("The distance between the two points is %3lf\n", distance);

    return 0;
}

double calculatePerimeter()
{
   double x1, x2, y1, y2;

    printf("Please enter x1 and x2: ");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: ");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    double perimeter = (dist * 2 * M_PI);

    printf("The perimeter of the city encompassed by your request is %3lf\n", perimeter );

    return 4;
}

double calculateArea()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: ");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: ");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    double area = (M_PI * pow(dist,2));

    printf("The area of the city encompassed by your request is %3lf\n",area);
}

double calculateWidth()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: ");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: ");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    printf("The width of the city encompassed by your request is %3lf\n", dist );
}

double calculateHeight()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: ");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: ");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    printf("The height of the city encompassed by your request is %3lf\n", dist);
}

//double askForUserInput()
//{
   // double x1, x2, y1, y2;

    //printf("Please enter x1 and x2: ");
    //scanf("%3lf %3lf", &x1, &x2);

    //printf("Please enter y1 and y2: ");
    //scanf("%3lf %3lf", &y1, &y2);

    //printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    // printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

//