#include <stdio.h>
int main()
{
    int a = 9;
    if (a = 5)
        printf("a is five\t");
    else
        printf("a is not five ");
    printf("Value of a is %d\n", a);
    return 0;
}
// a is five	Value of a is 5
int main(void)
{
    int a = 0;
    if (a = 0)
        printf("a is zero\t");
    else
        printf("a is not zero");
    printf("Value of a is %d\n", a);
}
//a is not zero
//Value of a is 0
int main(void)
{
    int i = 10;
    i == 50;
    if (i == 50)
        printf("i is fifty\n");
    else
        printf("i is not fifty\n");
    return 0;
}
// i is not fifty
int main(void)
{
    int a = 9, b = 0, c = 0;
    if (a < 10 && !b || c)
        printf("C in depth");
    else
        printf("See in depth");
    return 0;
}
// C in depth
int main()
{
    int a = 20, b = 3;
    if (a < 10)
        a = a - 5;
    b = b + 5;
    printf("%d\t  %d", a, b);
}
// 20  8
int main()
{
    int i = 1, j = 9;
    if (i >= 5 && j < 5)
        ;
    i = j + 2;
    printf("%d", i);
    return 0;
}
// 11
int main()
{
    int a = 0;
    int b = 0;
    if (!a)
    {
        b = !a;
        if (b)
            a = !b;
    }
    printf("%d   %d", a, b);
}
// 0   1
int main()
{
    int a, b, x;
    if (a < b)
    {
        x = 0;
    }
    else
        x = x + 100;
    return 0;
}
///////////////
int main()
{
    int i, j, k, l, m, z;
    if (i == 3 && j == k && l < m)
    {
        z = 100;
    }
}
////////////////
int main()
{
    int x, y;
    if (x == 0)
        y++;
    else if (x > 0)
        y--;
    else
        y += 2;
}
////////////
int main()
{
    char grade;
    int marks;
    if (grade == 'A')
        if (marks > 95)
            printf("Excellent\n");
        else
            ;
    else
        printf("Work hard for getting A grade\n");
}
////////////
int main()
{
    int a, b, c;
    if (a == 10)
    {
        if (b == 20)
        {
            if (c == 30)
            {
                printf("a 10 ,b 20 ,c 30\n,");
            }
        }
        else
        {
            printf("a is 10, b is not 20\n");
        }
    }
    else
        printf("a is not 10\n");
}
//////////////
int main()
{
    int k = 10;
    switch (k)
    {
    case 5:
    case 10:
        k++;
    //   continue;///a continue statement may only be used within a loop.
    case 15:
    case 20:
        k--;
    }
    return 0;
}
int main()
{
    int var = 2, x = 1, y = 2;
    switch (var)
    {
        //case x:   **expression must have a constant value
        x++;
        break;
        //case y:   **expression must have a constant value
        y++;
        break;
    }
    return 0;
}
int main()
{
    int i, total = 0;
    for (i = 0; i <= 10; i++)
    {
        switch (i)
        {
        case 1:
        case 4:
        case 5:
        case 7:
            total += i;
            break;

        default:
            continue;
        }
        printf("%d", i);
    }
    return 0;
}
///////////// 1457
int main()
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%d ", i);
    i = 10;
    while (i < 5)
        printf("%d ", i++);
    i = 0;
    while (i < 5)
        printf("%d", i++);
    return 0;
}
////////////
int main()
{
    int i;
    for (i = 0; i < 6; i++)
        if (i == 3)
            continue;

    printf("%d ", i);
}
//#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (i == 3)
        {
            i++;
        }
        printf("%d ", i);
    }
}
/////

int main()
{
    int i;
    for (i = 1; i <= 80; i++)
    {
        printf("%d\t", i);
        if (i % 8 == 0)
        {
            printf("\n");
        }
    }
}
///////
// 1	2	3	4	5	6	7	8
// 9	10	11	12	13	14	15	16
// 17	18	19	20	21	22	23	24
// 25	26	27	28	29	30	31	32
// 33	34	35	36	37	38	39	40
// 41	42	43	44	45	46	47	48
// 49	50	51	52	53	54	55	56
// 57	58	59	60	61	62	63	64
// 65	66	67	68	69	70	71	72
// 73	74	75	76	77	78	79	80

//Enter 10 numbers and fid maximum from them
#include <stdio.h>
int main()
{
    int n1, n2, max = 0, i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n1);
        if (n1 > max)
            max = n1;
        n1 = n1;
    }
    printf("Largest number is %d", max);
    return 0;
}
/////////
int main()
{
    
}