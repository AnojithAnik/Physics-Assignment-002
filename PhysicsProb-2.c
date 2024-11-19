// Problem #2: Slit Width to Wavelength Ratio
   
   #include<stdio.h>
   int main(){
   double m=1,theta=45;
   double rad=(theta*3.1426)/180 ;
   double ratio = m / sin(rad);
    printf("Slit width to wavelength ratio a/lemda = %lf\n", ratio);

    return 0;
}