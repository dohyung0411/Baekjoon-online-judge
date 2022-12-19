#include<stdio.h>
/// <summary>
/// baekjoon online judge 문제입니다.
/// 언어:C
/// 2022 12.20
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
    int a;
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)  printf("1");
    else printf("0");


}