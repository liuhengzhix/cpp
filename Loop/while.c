#include <stdio.h>

int main()
{
    puts("=================================================\n");
    /*
        语言 while 循环和 do while 循环详解
        while 循环的一般形式为：
            while(表达式){
                语句块
            }
        意思是，先计算“表达式”的值，当值为真（非 0）时， 执行“语句块”；执行完“语句块”，再次计算表达式的
        值，如果为真，继续执行“语句块”……这个过程会一直重复，直到表达式的值为假（0），就退出循环，执行 while
        后面的代码。
        我们通常将“表达式”称为循环条件，把“语句块”称为循环体，整个循环的过程就是不停判断循环条件、并执行
        循环体代码的过程。
    */
    /* int sum = 0, i = 0;
    while (i < 100)
    {
        i++;
        sum += i;
    }
    printf("1+...+100=%d\n", sum); */
    /*
        再看一个例子，统计从键盘输入的一行字符的个数：
    */
    /* int n = 0;
    printf("Input a string:");
    while (getchar() != '\n')
        n++;
    printf("Number of characters: %d\n", n); */

    /*
        do-while 循环的一般形式为：
            do{
                语句块
            }while(表达式);
        do-while 循环与 while 循环的不同在于：它会先执行“语句块”，然后再判断表达式是否为真，如果为真则继续循
        环；如果为假，则终止循环。因此， do-while 循环至少要执行一次“语句块”。
    */

    return 0;
}