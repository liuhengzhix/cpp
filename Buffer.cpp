#include<stdio.h>
#include<windows.h>

int main()
{
    puts("=====================\n");
    //printf函数有行缓冲,windows上取消了，Linux和mac有
    /* printf("geigeigei\n");
    Sleep(5000);
    printf("gei~gei~gei~\n"); */

    //【实例 1】 scanf() 连续输入：
    /* int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("a=%d, b=%d, c=%d", a, b, c); */

    //【实例 2】 scanf() 读取失败：
    /*
        运行结果：
        b=999
        100 http://c.biancheng.net↙
        a=100, b=999, str=http://c.biancheng.net

        到第一个 scanf() 时等待用户输入，从键盘输入 100 http://c.biancheng.net，按下回车键， scanf()
        0，赋值给变量 a，同时将内部的位置指针移动到 100 后面；
        到了第二个个 scanf()，缓冲区中有数据，会直接读取。此时缓冲区中的内容为 http://c.biancheng.net↙ ，即使
        的空格也不是 scanf() 想要的整数，所以匹配失败了，不会给变量 b 赋值， b 的值保持不变，这就是
        变量 b 的值相同的原因；
        意味着不会移动内部的位置指针，此时缓冲区中的内容仍然是 http://c.biancheng.net↙ 。执行到底
        f() 时，它想要一个字符串，这不是正好捡漏吗，把 http://c.biancheng.net 赋值给 str 就好了。
        nf()、 gets() 在读取字符串时会忽略换行符，不会把换行符作为字符串的内容；
    */
    /* int e, f=999;
    char str[30];
    printf("f=%d\n", f);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%s", str);
    printf("e=%d, f=%d, str=%s\n", e, f, str); */

    int g;
    gets(g);//参数是一个数组类型，返回值是String类型
    printf("%d ", g);


    return 0;
}