#include <stdio.h>
#include <string.h>

int main()
{
    puts("===========================================================\n");
    /*
        字符串连接函数 strcat()
        strcat 是 string catenate 的缩写，意思是把两个字符串拼接在一起，语法格式为：
            strcat(arrayName1, arrayName2);
            arrayName1、 arrayName2 为需要拼接的字符串。
        strcat() 将把 arrayName2 连接到 arrayName1 后面，并删除原来 arrayName1 最后的结束标志'\0'。 这意味着，
        arrayName1 必须足够长，要能够同时容纳 arrayName1 和 arrayName2，否则会越界（超出范围）。

        【strcat() 的返回值为 arrayName1 的地址。】
    */

    char str[30] = "nihh";
    char *str2 = "kkk";
    // strcat(str,str2);

    /*
        字符串复制函数 strcpy()
        strcpy 是 string copy 的缩写，意思是字符串复制，也即将字符串从一个地方复制到另外一个地方，语法格式为：
            strcpy(arrayName1, arrayName2);
        strcpy() 会把 arrayName2 中的字符串拷贝到 arrayName1 中，字符串结束标志'\0'也一同拷贝。

        【arrayName1中的内容会消失被arrayName2中的内容取代】
    */

    strcpy(str, str2);
    int len = sizeof(str2) / sizeof(char);
    printf("str=%s,len=%d\n", str, len);

    /*
        字符串比较函数 strcmp()
        strcmp 是 string compare 的缩写，意思是字符串比较，语法格式为：
        strcmp(arrayName1, arrayName2);
        arrayName1 和 arrayName2 是需要比较的两个字符串。
        字符本身没有大小之分， strcmp() 以各个字符对应的 ASCII 码值进行比较。 strcmp() 从两个字符串的第 0 个字符开
        始比较，如果它们相等，就继续比较下一个字符，直到遇见不同的字符，或者到字符串的末尾。
        返回值：若 arrayName1 和 arrayName2 相同，则返回 0；若 arrayName1 大于 arrayName2，则返回大于 0 的
        值；若 arrayName1 小于 arrayName2，则返回小于 0 的值。
    */

    /*
        数组越界
        C 语言数组是静态的，不能自动扩容，当下标小于零或大于等于数组长度时，就发生了越界（ Out Of
        Bounds） ，访问到数组以外的内存。如果下标小于零，就会发生下限越界（ Off Normal Lower） ；如果下标
        大于等于数组长度，就会发生上限越界（ Off Normal Upper） 。
        C 语言为了提高效率，保证操作的灵活性，并不会对越界行为进行检查，即使越界了，也能够正常编译，只有
        在运行期间才可能会发生问题。
    */

    /*
        字符串的长度大于数组长度，数组只能容纳字符串的前面一部分，也就是"http://c.b"，即使编译器在最后添加
        了'\0'，它也保存不到数组里面，所以 printf() 扫描数组时不会遇到结束符'\0'，只能继续向后扫描。而后面内
        存中的数据我们不知道是什么，字符能否识别，何时遇到'\0'，这些都是不确定的。当字符无法识别时，就会出
        现乱码，显示奇怪的字符。
        由此可见，在用字符串给字符数组赋值时，要保证数组长度大于字符串长度，以容纳结束符'\0'。
    */





    return 0;
}