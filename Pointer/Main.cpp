#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("===================\n");
    /*
        main()函数的高级用法：接收用户输入的数据
        main() 是 C 语言程序的入口函数，有且只能有一个，它实际上有两种标准的原型：
            1. int main();
            2. int main(int argc, char *argv[]);
    */
    int i;
    printf("The program receives %d parameters:\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}