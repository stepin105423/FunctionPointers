#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int main()
{
    int r1,r2;
    int (*add_ptr)(int,int);
    add_ptr=&add;
    r1=add_ptr(10,20);
    printf("addition: %d\n",r1);
    int (*sub_ptr)(int,int);
    sub_ptr=&sub;
    r2=sub_ptr(35,20);
    printf("subtraction: %d\n",r2);

    return 0;
}



