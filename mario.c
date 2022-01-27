#include <stdio.h>
void left_pyramid(int count)
{
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0 ; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
void right_pyramid(int count)
{
    for (int i = 1; i <= count; i++)
    {
        
        for (int j = i ; j < count; j++)
        {
            printf(" ");
        }for (int j = count-i ; j < count; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
void middle_pyramid_odd(int count)
{
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0; j < count; j++)
        {
            if(j == count/2 || j == count)
            printf(".");
        }
        
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int count = 5;
    scanf("%d", &count);
    middle_pyramid_odd(count);
    return 0;
}
