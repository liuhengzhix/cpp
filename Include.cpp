#include <stdio.h>
//不同的平台下引入不同的头文件
#if _WIN32 //识别windows平台
#include <windows.h>
#elif __linux__ //识别linux平台
#include <unistd.h>
#endif

int main()
{
    puts("================================================\n");
    /*
        前面各章中，已经多次使用过#include 命令。使用库函数之前，应该用#include 引入对应的头文件。 这种以#号开
        头的命令称为预处理命令。
        程序中要实现的某个功能在 VS 和 GCC 下使用的函数不同（假设 VS 下使用 a()， GCC 下使用 b()），
        VS 下的函数在 GCC 下不能编译通过， GCC 下的函数在 VS 下也不能编译通过，怎么办呢？
        这就需要在编译之前先对源文件进行处理：如果检测到是 VS，就保留 a() 删除 b()；如果检测到是 GCC，就保留
        b() 删除 a()。
    */
    /*
        预处理是 C 语言的一个重要功能，由预处理程序完成。当对一个源文件进行编译时，系统将自动调用预处理程序对
        源程序中的预处理部分作处理，处理完毕自动进入对源程序的编译。
        编译器会将预处理的结果保存到和源文件同名的.i 文件中，例如 main.c 的预处理结果在 main.i 中。和.c 一样， .i
        也是文本文件，可以用编辑器打开直接查看内容。
    */
    /*
        假如现在要开发一个 C 语言程序，让它暂停 5 秒以后再输出内容，并且要求跨平台，
        Windows 平台下的暂停函数的原型是 void Sleep(DWORD dwMilliseconds)（注意 S 是大写的），参数的单位
        是“毫秒”，位于 <windows.h> 头文件。
        Linux 平台下暂停函数的原型是 unsigned int sleep (unsigned int seconds)，参数的单位是“秒”，位于 <unistd.h>
        头文件。
    */
    //不同的平台下调用不同的函数
    /* #if _WIN32 //识别windows平台
    Sleep(5000);
    #elif __linux__ //识别linux平台
    sleep(5);
    #endif
    puts("http://c.biancheng.net/"); */

    /*
        #include 的用法有两种，如下所示：
        #include <stdHeader.h>
        #include "myHeader.h"
        使用尖括号< >和双引号" "的区别在于头文件的搜索路径不同：
        使用尖括号< >，编译器会到系统路径下查找头文件；
        而使用双引号" "，编译器首先在当前目录下查找头文件，如果没有找到，再到系统路径下查找。
    */

    return 0;
}