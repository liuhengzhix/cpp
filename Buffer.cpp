#include <stdio.h>
#include <windows.h>

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
        scanf() 时，它想要一个字符串，这不是正好捡漏吗，把 http://c.biancheng.net 赋值给 str 就好了。
        scanf()、 gets() 在读取字符串时会忽略换行符，不会把换行符作为字符串的内容；
    */
    /* int e, f=999;
    char str[30];
    printf("f=%d\n", f);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%s", str);
    printf("e=%d, f=%d, str=%s\n", e, f, str); */

    /* char g[30];
    gets(g);//参数是一个数组类型，返回值是String类型
    printf("str=%s\n", g); */

    /*
        第一个 scanf() 执行完后，将 99 赋值给了 a，【缓冲区中只剩下一个换行符\n】；到了第二个 scanf()，发现缓冲
        区中有内容，但是又不符合控制字符串的格式，于是尝试忽略这个空白符。注意，这个时候的空白符是不能忽
        略的，所以就没有办法了，只能读取失败了。
        本例中，第二个 scanf() 的开头并不是格式控制符，【而是写死的 i 字符，所以不会忽略换行符，而换行符和 i
        又不匹配，怎么办呢？没办法，只能读取失败了】
    */
    /* int h = 1, i = 2;
    scanf("h=%d", &h);
    scanf("i=%d", &i);
    printf("h=%d, i=%d\n", h, i); */

    /*
        清空输出缓冲区很简单，使用下面的语句即可：
        fflush(stdout);
        fflush() 是一个专门用来清空缓冲区的函数， stdout 是 standard output 的缩写，表示标准输出设备，也即显
        示器。整个语句的意思是，清空标准输出缓冲区，或者说清空显示器的缓冲区。
        Windows 平台下的 printf()、 puts()、 putchar() 等输出函数都是不带缓冲区的，所以不用清空
    */
    /*
        清空输入缓冲区
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        该代码不停地使用 getchar() 获取缓冲区中的字符，直到遇见换行符\n 或者到达文件结尾才停止。由于大家所
        学知识不足，这段代码暂时无法理解，我也就不细说了，在实际开发中，大家按照下面的形式使用即可：
    */
    /* int j = 1, k = 2;
    char ch;
    scanf("j=%d", &j);
    while((ch = getchar()) != '\n' && ch != EOF); //在下次读取前清空缓冲区
    scanf("k=%d", &k);
    printf("j=%d, k=%d\n", j, k); */

    /*
        使用 scanf() 清空缓冲区
        scanf("%*[^\n]");scanf("%*c");
        第一个 scanf() 将逐个读取缓冲区中\n 之前的其它字符，% 后面的 * 表示将读取的这些字符丢弃，遇到\n 字符
        时便停止读取。此时，缓冲区中尚有一个\n 遗留，第二个 scanf() 再将这个\n 读取并丢弃，这里的星号和第一
        个 scanf() 的星号作用相同。由于所有从键盘的输入都是以回车结束的，而回车会产生一个\n字符，所以将\n
        连同它之前的字符全部读取并丢弃之后，也就相当于清除了输入缓冲区。
    */
    int l = 1, m = 2;
    scanf("l=%d", &l);
    scanf("%*[^\n]");
    scanf("%*c");
    scanf("m=%d", &m);
    printf("l=%d, m=%d\n", l, m);

    return 0;
}