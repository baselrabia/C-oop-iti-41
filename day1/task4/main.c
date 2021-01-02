#include <stdio.h>
#include <stdlib.h>


struct Complex
{
    int real;
    int img;
};

int main()
{
    struct Complex c1={10,-20};
    printf("enter the real value then the imagine for the complex number \n");
    scanf("%d",&c1.real);
    scanf("%d",&c1.img);
    printc(c1);
    return 0;
}


void printc(struct Complex c)
{
    if (c.img >= 0)
        printf("complex : %d + %dj \n", c.real, c.img);
    else
        printf("complex : %d - %dj \n", c.real, abs(c.img));

}

