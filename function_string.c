#include <stdio.h>
#include <string.h>
void fun(char name[])
{
    printf("%s", name);
}
int main()
{
    char name[7] = "fozlur";
    fun(name);
    return 0;
}

// pointer variable er address rakhe.
//  string holo akta array type variable, and array akta pionter.
//  * and & simble deye pointer access kore.
// string type a variable function a pass korte length lage na.
