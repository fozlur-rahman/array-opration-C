#include <stdio.h>



void fun(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int ar[4] = {10, 20, 30, 40};
    fun(ar, 4);

    return 0;
}