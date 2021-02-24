#include <stdio.h>

int main()
{
    puts("==============================================\n");
    /*
        以 int arr[] = { 99, 15, 100, 888, 252 };为例，
        定义数组时，要给出数组名和数组长度，数组名可以认为是一个指针，它指向数组的第 0 个元素。 在 C 语言中，
        我们将第 0 个元素的地址称为数组的首地址。 以上面的数组为例，下图是 arr 的指向：
        数组名的本意是表示整个数组，也就是表示多份数据的集合，但在使用过程中经常会转换为指向数组第 0 个元素
        的指针，所以上面使用了“认为”一词，表示数组名和数组首地址并不总是等价。
    */
    int arr[] = {99, 15, 100, 888, 252};
    int len = sizeof(arr) / sizeof(int); //求数组长度
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i)); //*(arr+i)等价于arr[i]
    }
    printf("\n");
    /*
            int arr[] = { 99, 15, 100, 888, 252 };
            int *p = arr; 定义指针指向数组时不需要&
        如果一个指针指向了数组，我们就称它为数组指针（Array Pointer） 。
        数组指针指向的是数组中的一个具体元素，而不是整个数组，所以数组指针的类型和数组元素的类型有关，上面的
        例子中， p 指向的数组元素是 int 类型，所以 p 的类型必须也是 int *。
        sizeof(p) / sizeof(int)，
        sizeof(p) 求得的是 p 这个指针变量本身所占用的字节数，而不是整个数组占用的字节数。
    */

    return 0;
}