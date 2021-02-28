#include <stdio.h>

int main()
{
    /*
        C 语言提供了一种更加简单的方法，叫做条件运算符，语法格式为：
            表达式 1 ? 表达式 2 : 表达式 3
        条件运算符是 C 语言中唯一的一个三目运算符，其求值规则为：如果表达式 1 的值为真，则以表达式 2 的值作为
        整个条件表达式的值，否则以表达式 3 的值作为整个条件表达式的值。条件表达式通常用于赋值语句之中。
        max = (a>b) ? a : b;
    */
    int a, b;
    printf("请输入两个数字: \n");
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    printf("max=%d\n", max);

    return 0;
}