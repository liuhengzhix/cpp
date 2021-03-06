#include <stdio.h>
#include <cstdlib> //和malloc函数有关

int main()
{
    puts("=====================================\n");
    /*
        空指针 NULL
        一个指针变量可以指向计算机中的任何一块内存，不管该内存有没有被分配，也不管该内存有没有使用权限，
        只要把地址给它，它就可以指向， C 语言没有一种机制来保证指向的内存的正确性，程序员必须自己提高警惕。
    */
    /*
        这段程序没有语法错误，能够通过编译和链接，但当用户输入完字符串并按下回车键时就会发生错误，在 Linux
        下表现为段错误（ Segment Fault），在 Windows 下程序直接崩溃。如果你足够幸运，或者输入的字符串少，
        也可能不报错，这都是未知的。
        前面我们讲过，未初始化的局部变量的值是不确定的， C 语言并没有对此作出规定，不同的编译器有不同的实
        现，我曾警告大家不要直接使用未初始化的局部变量。上面的代码中， str 就是一个未初始化的局部变量，它的
        值是不确定的，究竟指向哪块内存也是未知的，大多数情况下这块内存没有被分配或者没有读写权限
    */
    /*
        其实， NULL 是在 stdio.h 中定义的一个宏，它的具体内容为：
            #define NULL ((void *)0)
        (void *)0 表示把数值 0 强制转换为 void *类型，最外层的( )把宏定义的内容括起来，防止发生歧义。从整体
        上来看， NULL 指向了地址为 0 的内存，而不是前面说的不指向任何数据。
    */
    /* char *str = NULL;
    gets(str);
    //【空指针取地址用&str;输出值不用*号(代码中千万别加\n会把(null)吞掉)】
    printf("%s", str); */

    /*
        void 指针
        对于空指针 NULL 的宏定义内容，上面只是对((void *)0)作了粗略的介绍，这里重点说一下 void *的含义。
        void 用在函数定义中可以表示函数没有返回值或者没有形式参数，用在这里表示指针指向的数据的类型是未知
        的。
        也就是说， void *表示一个有效指针，它确实指向实实在在的数据，只是数据的类型尚未确定，在后续使用过
        程中一般要进行强制类型转换。
    */
    //C 语言动态内存分配函数 malloc() 的返回值就是 void *类型，在使用时要进行强制类型转换，请看下面的例子：
    //分配可以保存 30 个字符的内存，并把返回的指针转换为 char *
    /* char *str = (char *)malloc(sizeof(char) * 30);
    gets(str);
    printf("%s\n", str); */
    /*
        关于动态内存分配的概念以及 malloc() 的具体用法，我们将在《C 语言内存精讲》专题中详细说明，这里重点
        是让大家理解 void *，它不是空指针的意思，而是实实在在的指针，只是指针指向的内存中不知道保存的是什
        么类型的数据。
    */

    int a[] = {1, 2, 3, 4, 5}, *p, i = 2;
    p = a;
    printf("%d\n", p[3]);

    /*
        【好好体会】
        数组作函数参数
        C 语言标准规定，作为“类型的数组”的形参应该调整为“类型的指针”。在函数形参定义这个特殊情况下，
        编译器必须把数组形式改写成指向数组第 0 个元素的指针形式。编译器只向函数传递数组的地址，而不是整个
        数组的拷贝。
        这种隐式转换意味着下面三种形式的函数定义是完全等价的：
            1. void func(int *parr){ ...... }
            2. void func(int arr[]){ ...... }
            3. void func(int arr[5]){ ...... }
    */
    /*
        关于数组和指针可交换性的总结
        1) 用 a[i] 这样的形式对数组进行访问总是会被编译器改写成（或者说解释为）像 *(a+i) 这样的指针形式。
        2) 指针始终是指针，它绝不可以改写成数组。你可以用下标形式访问指针，一般都是指针作为函数参数时，而
        且你知道实际传递给函数的是一个数组。
        3) 在特定的环境中，也就是数组作为函数形参，也只有这种情况，一个数组可以看做是一个指针。作为函数形
        参的数组始终会被编译器修改成指向数组第一个元素的指针。
        4) 当希望向函数传递数组时，可以把函数参数定义为数组形式（可以指定长度也可以不指定长度），也可以定
        义为指针。不管哪种形式，在函数内部都要作为指针变量对待。
    */

    return 0;
}