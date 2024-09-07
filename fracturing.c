// Kayla Grude
// UCFID: 5692611
// Professor Parra
// 9/7/24
/////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
#define pi 3.14159;


// functions called to keep the top clean
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

// distance formula called in all the rest of the functions
double distanceFormula(double x1, double x2, double y1, double y2)
{
    double x = pow((x2-x1),2);
    double y = pow((y2-y1),2);
    double distance = sqrt(x+y);
    return distance;
}

// just distance betwen two points no extra calculations
double calculateDistance()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: \n");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: \n");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double distance = distanceFormula(x1, y1, x2, y2);

    printf("The distance between the two points is %3lf\n", distance);

    return 0;
}

// calculating perimeter uses circumference formula
double calculatePerimeter()
{
   double x1, x2, y1, y2;

    printf("Please enter x1 and x2:\n");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2:\n");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    double perimeter = (dist * 2 * M_PI);

    printf("The perimeter of the city encompassed by your request is %3lf\n", perimeter );

    return 4;
}

// area of a circle uses distance function and area of a circle
double calculateArea()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: \n");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: \n");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);
 
    double area = (M_PI * pow(dist,2));

    printf("The area of the city encompassed by your request is %3lf\n",area);
    
    return 5;
}

// just uses distance formula
double calculateWidth()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: \n");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: \n");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, y1, x2, y2);

    printf("The width of the city encompassed by your request is %3lf\n", dist );

    return 3;
}

// just uses distance formula
double calculateHeight()
{
    double x1, x2, y1, y2;

    printf("Please enter x1 and x2: \n");
    scanf("%3lf %3lf", &x1, &x2);

    printf("Please enter y1 and y2: \n");
    scanf("%3lf %3lf", &y1, &y2);

    printf("Point #1: (%3lf, %3lf)\n",x1,y1 );
    printf("Point #2: (%3lf, %3lf)\n",x2,y2 );

    double dist = distanceFormula(x1, x2, y1, y2);

    printf("The height of the city encompassed by your request is %3lf\n", dist);

    return 3;
}

// tried to do this but got so burnt out from figuring everything else out i gave up i probably could do it
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

//x1, y1, x2, y2