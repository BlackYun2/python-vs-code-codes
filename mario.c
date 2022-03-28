#include <stdio.h>
void left_pyramid(int count)
{
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0 ; j <= i; j++)
        {
            printf("*");
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
            printf("*");
        }
        
        printf("\n");
    }
}
void middle_pyramid_bottom(int count)
{
    if (count % 2 == 0)
        count--;

    for (int i = 0; i <= (count/2); i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (int q = count - (2*i); q > 0; q--)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
void middle_pyramid_top(int count)
{
    if (count % 2 == 0)
        count--;
    int range = count / 2;
    for (int i = 0; i <= range; i++)
    {
        for (int j = range-i; j > 0; j--)
        {
            printf(" ");
        }
        for (int q = 2*i; q >= 0; q--)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int count = 5;
    //printf("\nhello \rhi\r"); // ( \r ) means start from the start of the line
    scanf("%d", &count);
    left_pyramid(count);
    right_pyramid(count);
    middle_pyramid_top(count);
    middle_pyramid_bottom(count);
    scanf("%d");
    return 0;
}
