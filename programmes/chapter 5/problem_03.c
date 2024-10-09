//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
#include <stdio.h>
float force_calc ( int);
float force_calc ( int mass){
    return (float)mass*9.8;
}
int main(){
   int mass;
    printf("Enter the input:");
    scanf("%d", &mass);
    printf("force of attraction on a body of mass %d exerted by earth is %f", mass, force_calc(mass));
    return 0;
}