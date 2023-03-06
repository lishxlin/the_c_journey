/* 2、有一个分段函数（x取整数）
*  f(x)=3x+5 (x<0)
*  f(x)=x*x+5x-21 (x位于[0,3]区间)
*  f(x)=10-2x (x>3)
*  键盘任意输入一个整数给x，输出f(x)的值
*/

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Please enter a number --->");
    scanf("%d", &x);

    if (x < 0)
        result = (3 * x) + 5;
    else
        if (x >= 0 && x <= 3) // I use (x <= 3)
            result = (x*x) + (5*x) - 21;
        else
            result = 10 - 2 * x;

    printf("\nAnswer is %d", result);

    return 0;
}