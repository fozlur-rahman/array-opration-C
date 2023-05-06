#include <stdio.h>
void fun(int *p)
{
    *p = 500;
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d", x);

    return 0;
}

// * start holo dereferance . ata variable address access kore and oi address er value neye kaj kore