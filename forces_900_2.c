#include <stdio.h>
#include <string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Hello World");
    char str[20];
    float part = 0.32;
    sprintf(str, "%d", 46785752);
    int x = strcmp(str, "46785752");
    printf("\n%d\n",x);
    if(x == 0)
    printf("%s\n",str);
    printf("%f\n", (part * 50));
    int q = floor(part * 4);
    printf("%d\n", (q));
    return 0;
}
