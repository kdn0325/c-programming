#include <stdio.h>

int main(void)
{
    int x,i;
    printf("출력할 구구단 수를 입력하세요 : ");
    scanf("%d",&x);
    for(i=1; i<=9; i++)
    {
        printf("%d X %d = %d\n", x,i, x * i);
    }
    return 0;
}