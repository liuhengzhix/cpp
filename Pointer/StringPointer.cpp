#include <stdio.h>
#include <string.h> //和strlen(数组名)相关

int main()
{
    puts("==========================================\n");
    /*
        C 语言中没有特定的字符串类型，我们通常是将字符串放在一个字符数组中
    */
    /* char str[] = "http://c.biancheng.net";
    int len = strlen(str), i;
    //直接输出字符串
    printf("%s\n", str);
    //每次输出一个字符
    for (i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n"); */

    /*
        除了字符数组， C 语言还支持另外一种表示字符串的方法，就是直接使用一个指针指向字符串，例如：
            char *str = "http://c.biancheng.net";
        或者：
            char *str;
            str = "http://c.biancheng.net";
        字符串中的所有字符在内存中是连续排列的， str 指向的是字符串的第 0 个字符；我们通常将第 0 个字符的地址
        称为字符串的首地址。字符串中每个字符的类型都是 char，所以 str 的类型也必须是 char *。
    */
    /* char *str = "asdfhgkl";
    printf("%s\n", str); */
    /*
        warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
        学习c或者c++的时候都知道，如果在赋值操作的时候，等号两边的变量类型不一样，
        那么编译器会进行一种叫做 implicit conversion 的操作来使得变量可以被赋值。
        在上面的表达式中printf("%s\n", str);的"%s"是一个不变常量，在c++中叫做string literal，type是const char *，
        而str则是一个char指针。如果强行赋值会发生什么呢？
        没错，就是将右边的常量强制类型转换成一个指针，结果就是我们在修改一个const常量。
        编译运行的结果会因编译器和操作系统共同决定，有的编译器会通过，有的会抛异常，
        就算过了也可能因为操作系统的敏感性而被杀掉。

        像这种直接将string literal 赋值给指针的操作被开发者们认为是deprecated，只不过由于以前很多代码都有这种习惯，
        为了兼容，就保留下来了。
    */
    
    /*
        有！它们最根本的区别是在内存中的存储区域不一样，字符数组存储在全局数据区或栈区，第二种形式的字符串存
        储在常量区。全局数据区和栈区的字符串（也包括其他数据）有读取和写入的权限，而常量区的字符串（也包括其
        他数据）只有读取权限，没有写入权限。
    */
    /*
        我们将第二种形式的字符串称为字符串常量，意思很明显，常量只能读取不能写入。
            char *str = "Hello World!";
            str = "I love C!"; //正确
            str[3] = 'P'; //错误
    */
    



    return 0;
}