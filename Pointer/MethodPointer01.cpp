#include <stdio.h>
#include <string.h>

void swap(int *p1, int *p2)
{
    int temp; //临时变量
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int max(int *intArr, int len) //*intArr可以替换成inArr[6]或者intArr[]但没有指定数组长度，好像可以接受任意长度的数组。
{
    int i, maxValue = intArr[0]; //假设第0个元素是最大值
    for (i = 1; i < len; i++)
    {
        if (maxValue < intArr[i])
        {
            maxValue = intArr[i];
        }
    }
    return maxValue;
}

char *strlong(char *str1, char *str2)
{
    if (strlen(str1) >= strlen(str2))
    {
        return str1;
    }
    else
    {
        return str2;
    }
}

int main()
{
    puts("=============================================\n");
    /*
        在 C 语言中， 函数的参数不仅可以是整数、 小数、 字符等具体的数据， 还可以是指向它们的指
        针。 用指针变量作函 数参数可以将函数外部的地址传递到函数内部， 使得在函数内部可以操作
        函数外部的数据， 并且这些数据不会随着 函数的结束而被销毁。
        像数组、 字符串、 动态分配的内存等都是一系列数据的集合， 没有办法通过一个参数全部传入
    */
    /* int a = 66, b = 99;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b); */

    /*
        用数组作函数参数
    */
    /* int nums[6], i;
    int len = sizeof(nums) / sizeof(int);
    //读取用户输入的数据并赋值给数组元素
    for (i = 0; i < len; i++)
    {
        scanf("%d", nums + i);
    }
    printf("Max value is %d!\n", max(nums, len)); */

    /*
        指针作为函数返回值
        C 语言允许函数的返回值是一个指针（地址），我们将这样的函数称为指针函数。
        下面的例子定义了一个函数 strlong()，用来返回两个字符串中较长的一个：
    */
    char str1[30], str2[30], *str;
    gets(str1);
    gets(str2);
    str = strlong(str1, str2);
    printf("Longer string: %s\n", str);

    return 0;
}