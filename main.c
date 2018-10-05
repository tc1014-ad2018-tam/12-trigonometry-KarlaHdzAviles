/* This program will help to the user to calculate all the trigonometric functions (sin,cos,tan,sec,csc and ctg),
   with the user values and convert them into radians

   Author: Karla Alexandra Hernandez Aviles
   mail: A01411843@itesm.mx
   Date: 04/10/2018
*/


#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846 //PI DEFINE

//radians function
double Rad(double degrees){
    double rad;
    return rad=degrees*(PI/180); //Operation and return to convert degrees to radians
}

int main() {
    //Declaration of Variables
    double degrees;
    double radians;
    double csc;
    double sec;
    double ctg;

    printf("Welcome, this program will help you, with trigonometric functions (degrees/radians");

    //Say to the user to give the value
    printf("give me the angle in degrees:   \n");
    scanf("%lf",&degrees);

    radians=Rad(degrees);
    ctg= 1 / (tan(radians)); //operation to convert Tan to Ctg
    csc= 1 / (sin(radians)); //operation to convert Sin to Csc
    sec= 1 / (cos(radians)); //operation to convert Cos to Sec

    printf("The value of %lf degrees in radians is: %lf\n",degrees,radians);
    printf("Cos = %lf\n Sin = %lf\n Tan = %lf\n",cos(radians),sin(radians),tan(radians));

    if (radians==PI || radians==0){ //If radians is equals to pi or zero, Csc and Ctg becomes infinit
        printf("Sec = %lf\n Csc = infinit\n Ctg = infinit", sec);
    }
    else {
        printf("Sec = %lf\n Csc = %lf\n Ctg = %lf\n ", sec, csc, ctg);
    }
    return 0;
}