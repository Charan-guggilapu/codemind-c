#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z && x>50)
    printf("Gryffindor");
    else if(y>z && y>x && y>50)
    printf("Slytherin");
    else if(z>x && z>y && z>50)
    printf("Hufflepuff");
    else
    printf("NOTA");
}