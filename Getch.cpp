#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    puts("===================================\n");
    /* char ch;
    int i = 0;
    while (ch = getch())
    {
        if (ch == 27)
        {
            break;
        }else{
            printf("Number: %d\n", ++i);
        }
        
    } */

    /*
        在 Windows 系统中， conio.h 头文件中的 kbhit()函数就可以用来实现非阻塞式键盘监听。
        conio.h 是 Windows 下特有的头文件，所以 kbhit() 也只适用于 Windows，不适用于 Linux 和 Mac OS。
        用户每按下一个键，都会将对应的字符放到输入缓冲区中， kbhit() 函数会检测缓冲区中是否有数据，如果有的
        话就返回非 0 值，没有的话就返回 0 值。但是 kbhit() 不会读取数据，数据仍然留在缓冲区，所以一般情况下
        我们还要结合输入函数将缓冲区种的数据读出。
    */
    char ch1;
    int j = 0;
    //循环监听，直到按 Esc 键退出
    while (1)
    {
        if (kbhit())
        {                  //检测缓冲区中是否有数据
            ch1 = getch(); //将缓冲区中的数据以字符的形式读出
            if (ch1 == 27)
            {
                break;
            }
        }
        printf("Number: %d\n", ++j);
        Sleep(3000); //暂停 1 秒220
    }

    return 0;
}