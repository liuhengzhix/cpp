#include <stdio.h>

int main()
{
    puts("==========================================\n");
    /*
        如果一个数组中的所有元素保存的都是指针，那么我们就称它为指针数组。指针数组的定义形式一般为：
        dataType *arrayName[length];
        [ ]的优先级高于*，该定义形式应该理解为：
        dataType *(arrayName[length]);
        括号里面说明 arrayName 是一个数组，包含了 length 个元素，括号外面说明每个元素的类型为 dataType *。
    */
    //除了每个元素的数据类型不同，指针数组和普通数组在其他方面都是一样的，下面是一个简单的例子：

    /* int a = 16, b = 932, c = 100;
    //定义一个指针数组
    int *arr[3] = {&a, &b, &c}; //也可以不指定长度，直接写作 int *parr[]
    //定义一个指向指针数组的指针
    int **parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr + 0), **(parr + 1), **(parr + 2)); */

    //指针数组还可以和字符串数组结合使用，请看下面的例子：
    char *str[3] = { //warning:ISO C++ forbids converting a string constant to 'char*'
        "c.biancheng.net",
        "C语言中文网",
        "C Language"};
    printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
    char ch[] = {'g', 'f', 'h', 'q'};
    //*str指向的不是基本数据类型时：不带星号的(str)是值,带星号的是地址
    char *str1 = "Hello World!"; //warning:ISO C++ forbids converting a string constant to 'char*'
    char str2[30] = "I like C"; //没有警告直接写数组名就是值,和大括号中放单个字符('I')的一样
    printf("%s\n", str1);

    //(*lines + 5)[5] ()括号的意思是地址值的变化，[]是取数值
    //*lines[0] + 2        '+'加号表达的意思是数值+2,不是地址值+2

    return 0;
}