#include<stdio.h>
int main()
{
    char q;
    scanf("%c",&q);
    if((q>='a'&& q<='z') ||(q>='A'&& q<='Z'))
    {
        printf("Alphabet");
    }
    else 
    {
        printf("No");
    }
    return 0;
    
}
