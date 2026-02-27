#include <stdio.h>
#include <stdlib.h>

int main()
{
    int width,length,area,perimeter;

    //Get width from user
    printf("Enter the width\n");
    scanf("%d",&width);

    //Get length from user
    printf("Enter the length\n");
    scanf("%d",&length);

    area=width*length;
    perimeter=2*(width+length);

    printf("Area of the rectangle=%d\n",area);
    printf("Perimeter of the rectangle=%d",perimeter);




    return 0;
}
