/* 3、用户任意输入1~7之间的整数，输出对应星期几。
*  如用户输入1，输出Monday；输入2，输出Tuesday；输入7，输出Sunday。。。
*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Please a digit number --->");
    scanf("%d", &x);

    if (x == 1)
        printf("Mon.");
    else
        if (x == 2)
            printf("Tue.");
        else
            if (x == 3)
                printf("Wed.");
            else
                if (x == 4)
                    printf("Thu.");
                else
                    if (x == 5)
                        printf("Fri.");
                    else
                        if (x ==6)
                            printf("Sat.");
                        else
                            printf("Sun.");

    return 0;
}