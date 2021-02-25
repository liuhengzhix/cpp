#include <stdio.h>

int main()
{
    puts("=============================================\n");
    /*
        for 循环的一般形式为：
            for(表达式 1; 表达式 2; 表达式 3){
                语句块
            }
        “表达式 1”仅在第一次循环时执行，以后都不会再执行，可以认为这是一个初始化语句。 “表达式 2”一般是一
        个关系表达式，决定了是否还要继续下次循环，称为“循环条件”。 “表达式 3”很多情况下是一个带有自增或自
        减操作的表达式，以使循环条件逐渐变得“不成立”。
        由此我们可以总结出 for 循环的一般形式：
            for(初始化语句; 循环条件; 自增或自减){
                语句块
            }
    */
    /* int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum+=i;
    }
    printf("sum=%d\n", sum); */

    /*
        C语言 for 循环中的三个表达式
        for 循环中的“表达式 1（初始化条件） ”、 “表达式 2(循环条件)”和“表达式 3（自增或自减） ”都是可选项，
        都可以省略（但分号;必须保留）。
            3个表达式可以同时省略。例如：
            for( ; ; ) 语句
            相当于：
            while(1) 语句
    */
    
    /*
        C 语言跳出循环（break 和 continue）
        当 break 关键字用于 while、 for 循环时，会终止循环而执行整个循环语句后面的代码。 break 关键字通常和 if 语
        句一起使用，即满足条件时便跳出循环。
        continue 语句的作用是跳过循环体中剩余的语句而强制进入下一次循环。 continue 语句只用在 while、 for 循环中，
        常与 if 条件语句一起使用，判断条件是否成立。

        break 与 continue 的对比： break 用来结束所有循环，循环语句不再有执行的机会； continue 用来结束本次循环，
        直接跳到下一次循环，如果循环条件成立，还会继续循环。
    */
    /* char a = 'f';
    putchar(a); */

    //九九乘法表
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-d*%-d=%-2d ", j, i, i*j);
        }
        printf("\n");
    }
    
    

    return 0;
}