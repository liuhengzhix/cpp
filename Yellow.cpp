#include<stdio.h>
#include<windows.h>

int main()
{

    /*
        调用形式为：
        SetConsoleTextAttribute( HANDLE hConsoleOutput, WORD wAttributes );
        hConsoleOutput 表示控制台缓冲区句柄，可以通过 GetStdHandle(STD_OUTPUT_HANDLE)来获得；
        wAttributes 表示文字颜色和背景颜色。
        这里不去追究 HANDLE 的含义，后续在 Windows 开发中会详细讲解。
        WORD 在 windows.h 中定义，等同于 unsigned short，使用低 4 位表示文字（前景）颜色，高 4 位表示文字
        背景颜色，所以它的取值为 xx。 x 为一位 16 进制数，即 0~F 都可以使用，可以随意组合。
        0~F 分别代表的颜色如下：
        0 = 黑色 8 = 灰色 1 = 淡蓝 9 = 蓝色
        2 = 淡绿 A = 绿色 3 = 湖蓝 B = 淡浅绿
        C = 红色 4 = 淡红 5 = 紫色 D = 淡紫
        6 = 黄色 E = 淡黄 7 = 白色 F = 亮白
    */

    puts("==================================");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0xC );
    puts("红色文字");




    return 0;
}