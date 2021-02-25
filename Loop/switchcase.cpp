#include <stdio.h>

int main()
{
    /*
        switch 是另外一种选择结构的语句，用来代替简单的、拥有多个分枝的 if else 语句，基本格式如下：
        switch(表达式){
            case 整型数值 1: 语句 1 break;
            case 整型数值 2: 语句 2 break;
            ......
            case 整型数值 n: 语句 n break;
            default: 语句 n+1 break;
        }
        需要重点强调的是，当和某个整型数值匹配成功后，会执行该分支以及后面所有分支的语句。
    */
    int a;
    printf("Input integer number:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("error\n");
        break;
    }

    return 0;
}