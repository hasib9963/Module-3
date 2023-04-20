#include<stdio.h>
int main()
{
    int i;
    for(i=1;i>=3;i=i++)
    // this is infinity loop
    {
        printf("Hello\n");
    }
    return 0;
}