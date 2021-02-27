#include <stdio.h>

//函数声明
int gcd(int a, int b); //也可以写作 int gcd(int, int);

int main()
{
    puts("\n======================================");
    /*
        C 语言块级变量（在代码块内部定义的变量）
        所谓代码块，就是由{ }包围起来的代码。代码块在 C 语言中随处可见，例如函数体、选择结构、循环结构等。不包
        含代码块的 C 语言程序根本不能运行，即使最简单的 C 语言程序（上节已经进行了展示）也要包含代码块。
        C 语言允许在代码块内部定义变量，这样的变量具有块级作用域；换句话说，【在代码块内部定义的变量只能在代码
        块内部使用，出了代码块就无效了。】
    */

    printf("The greatest common divisor is %d\n", gcd(100, 60));
    int sum = 0;
    for (int i = 0; i <= 10; i++) //i是块级变量
    {
        sum += i;
    }

    /*
        单独的代码块
        C 语言还允许出现单独的代码块，它也是一个作用域。请看下面的代码：
    */
    int n = 22; //编号①
    //由{ }包围的代码块
    {
        int n = 40; //编号②
        printf("block n: %d\n", n);  //n=40
    }
    printf("main n: %d\n", n); //n=22


    /*
        可以说， C 程序的全部工作都是由各式各样的函数完成的，函数就好比一个一个的零件，组合在一起构成一台强大的机器。
        标准 C 语言（ANSI C）共定义了 15 个头文件，称为“C 标准库”，所有的编译器都必须支持，如何正确并熟练的
        使用这些标准库，可以反映出一个程序员的水平。
        合格程序员： <stdio.h>、 <ctype.h>、 <stdlib.h>、 <string.h>
        熟练程序员： <assert.h>、 <limits.h>、 <stddef.h>、 <time.h>
        优秀程序员： <float.h>、 <math.h>、 <error.h>、 <locale.h>、 <setjmp.h>、 <signal.h>、 <stdarg.h>

        main() 函数是主函数，它可以调用其它函数，而不允许被其它函数调用。因此， C 程序的执行总是从 main() 函数
        开始，完成对其它函数的调用后再返回到 main() 函数，最后由 main() 函数结束整个程序。
    */












    return 0;
}

//函数定义
int gcd(int a, int b)
{
    //若a<b，那么交换两变量的值
    if (a < b)
    {
        int temp1 = a; //块级变量
        a = b;
        b = temp1;
    }
    //求最大公约数
    while (b != 0)
    {
        int temp2 = b; //块级变量
        b = a % b;
        a = temp2;
    }
}