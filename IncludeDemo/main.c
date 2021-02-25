#include <stdio.h>
#include "my.h"
int main()
{
    // TODO:编译未通过
    printf("%d\n", sum(1, 100));
    return 0;
}
/*
    cd "d:\Program\vscode\cpp\IncludeDemo\" && g++ main.cpp -o
    g++ main.cpp -o main && "d:\Program\vscode\cpp\IncludeDemo\"main 
    d:/program/minggw/bin/../lib/gcc/mingw32/9.2.0/../../../../mingw32/bin/ld.exe: C:\Users\LHZ\AppData\Local\Temp\ccOpzP5q.o:main.cpp:(.text+0x1e): undefined reference to `sum(int, int)'
    collect2.exe: error: ld returned 1 exit status
*/