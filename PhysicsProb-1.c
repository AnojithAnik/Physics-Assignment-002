//problem #1: m'th order maxima

#include<stdio.h>
#include<math.h>
int main(){
    double wavelength, d, theta, m;
    printf("Enter wavelength (nm): ");
    scanf("%lf", &wavelength);
    printf("Enter slit separation d (µm): ");
    scanf("%lf", &d);
    printf("Enter angle θ (degrees): ");
    scanf("%lf", &theta);
   double rad=(3.1416*theta)/180 ;
   
    if (wavelength < 380 || wavelength > 750) {
        printf("Out of range. Enter a valid wavelength.\n");
    } else {
   d=d/1e6;
   wavelength = wavelength/1e9;
    
        m = (d * sin(rad )) / (wavelength); 
        printf("m-th order maxima: %.2f\n", floor(m));
        return 0;
    }
}