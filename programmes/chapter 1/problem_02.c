// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.
#include <stdio.h>

int main(){
    float redius, area, height, volume;
    printf("enter the redius of circle\n");
    scanf("%f", &redius);
    area = 3.14*redius*redius;
    printf("the area of the circle is %f\n", area);
    //for volume of cylender
    printf("now we're calculating the volume of a cylindewr which has same redius as circle\n");
    printf("enter the height of the cylinder");
    scanf("%f", &height);
    volume =  3.14*redius*redius*height;
    printf("the volume of cylinder is %f\n", volume);
    return 0;
}