 #include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if(s%4==0)
    {
        if(s%100==0)
        {
            if(s%400==0)
            printf("yes");
            else
            printf("no");
        }
        else 
        printf("yes");
    }
    else 
    printf("no");
    
    return 0;
    
}
