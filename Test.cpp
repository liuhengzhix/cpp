#include <stdio.h>

int main()
{
    puts("=======================================\n");
    int n = 100;
    char c = '@';
    float f = 93.96;
    printf("n = %d, c = %c, f = %f.\n", n, c, f);
    puts("C大家可以放心使用 " "只有 long 的长度在 Win64 和类 " "http://c.biancheng.net\n");

    short e = 99, d = 99; //short int a = 99, d = 99; 一样效果
    printf("e = %d, d = %d\n", e, d);

    short a = 10;
    int b = 100;

    //获取某个数据类型的长度可以使用 sizeof 操作符
    int short_length = sizeof a;
    int int_length = sizeof(b);
    int long_length = sizeof(long);
    int char_length = sizeof(char);

    printf("short=%d, int=%d, long=%d, char=%d\n", short_length, int_length, long_length, char_length);

    //合法的二进制
    int q = 0b101; //换算成十进制为 5
    int w = -0b110010; //换算成十进制为 -50
    int r = 0B100001; //换算成十进制为 33
    /*
        标准的 C 语言并不支持上面的二进制写法，只是有些编译器自己进行了扩展，才支持二进制数字。
        换句话说，并不是所有的编译器都支持二进制数字，只有一部分编译器支持，并且跟编译器的版本有关系。
    */
    printf("q = %d\n", q);
    




    return 0;
}