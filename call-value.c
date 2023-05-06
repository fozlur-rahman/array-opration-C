#include <stdio.h>
void fun(int x)
{
    x = 200;
}

int main()
{
    int x = 10;
    fun(x);
    printf("%d", x);
    return 0;
}

// call by vlue te sudu value pass hoy, address or variable pass hoy na 