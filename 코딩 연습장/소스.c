/*#include<stdio.h>
/// <summary>
/// baekjoon online judge �����Դϴ�.
/// ���:C
/// 2022 12.20
/// ����: ����
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
/// ���� : ��и� ����
/// ��� : C
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


/*#include<stdio.h>

/// <summary>
/// Name : �˶��ð�
/// Language : C
/// No : 2884
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
    int H;
    int M;

    scanf_s("%d %d", &H, &M);

    if (H < 24, M >= 45)
    {
        M = M - 45;
        printf("%d %d", H, M);
    }

    else
    {
        M = M + 60;
        if (H == 0)
        {
            H = 23;
            printf("%d %d", H, M - 45);
        }

        else
        {
            H--;
            printf("%d %d", H, M - 45);
        }
    }

}
*/
