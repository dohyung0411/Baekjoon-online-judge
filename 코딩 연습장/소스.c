/*#include<stdio.h>
/// <summary>
/// baekjoon online judge 문제입니다.
/// 언어:C
/// 2022 12.20
/// 문제: 윤년
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
    int a;
    scanf_s("%d", &a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)  printf("1");
    else printf("0");


}
*/

/*#include<stdio.h>

/// <summary>
/// 문제 : 사분면 고르기
/// 언어 : C
/// 2022 12.20
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("1");
    }
    if (x < 0 && y > 0)
    {
        printf("2");
    }
    if (x < 0 && y < 0)
    {
        printf("3");
    }
    if (x > 0 && y < 0)
    {
        printf("4");
    }

    return 0;


}
*/