#include <stdlib.h>  //%g小数的输出;ANSI C 规定的预定义宏;system("pause");
#include <windows.h> //Sleep(毫秒值)函数;
#include <conio.h>   //和getche(),getch()函数有关;kbhit()函数
#include <unistd.h>  //和sleep()函数有关linux下和mac下;
#include <string.h>  //和strlen(数组名)相关;
#include <cstdlib>   //和malloc函数有关;

/*
    究其原因，就是 printf() 带有行缓冲区， "C 语言中文网"这几个字符要先放入缓冲区中，而不是立即显示到屏幕
    上。放入缓冲区以后，程序又暂停了 5 秒，然后执行第二个 printf()，又将"http://c.biancheng.net\n"放入了
    缓冲区。注意最后的换行符\n，它会使得缓冲区刷新，将缓冲区中的所有内容都输出到显示器上，所以我们才看到两个 printf() 一起输出。
    如果将第一个 printf() 的最后加上换行符\n，也就是写作下面的形式：
    printf("C 语言中文网\n");
    此时情况又不一样了，第一个 printf() 会先输出，第二个 printf() 等待 5 秒以后才输出。这是因为，第一个
    printf() 的最后有换行符\n，它会使得缓冲区刷新，所以立即就输出了，不用等着第二个 printf()。
    ② 对于 scanf()，不管用户输入多少内容，只要不按下回车键，就不进行真正的读取。这是因为 scanf() 是带有
    行缓冲的，用户输入的内容会先放入缓冲区，直到用户按下回车键，产生换行符\n，才会刷新缓冲区，进行真
    正的读取。
    scanf() 还有很多与缓冲区有关的奇怪问题，在《使用 scanf 从键盘输入数据》一节中相信读者也领略到了，但
    是由于本节篇幅有限，在此就不展开讨论了，下节《结合缓冲区谈 scanf()函数》我会用一节的内容来深入讲解
    ================================================================================================
    ================================================================================================
    所谓刷新缓冲区，就是将缓冲区中的内容送达到目的地。缓冲区的刷新遵循以下的规则：
    不管是行缓冲还是全缓冲，缓冲区满时会自动刷新；
    行缓冲遇到换行符\n 时会刷新；
    关闭文件时会刷新缓冲区；
    程序关闭时一般也会刷新缓冲区，这个是由标准库来保障的；使用特定的函数也可以手动刷新缓冲区，我们将在《C 语言清空（刷新）缓冲区，从根本上消除那些奇怪的行
    为》一节中展开讲解
*/