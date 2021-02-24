#include<stdio.h>
#include<conio.h> //和getche()函数有关

int main()
{
    puts("================================================\n");
    /*
        在 C 语言中，有多个函数可以从键盘获得用户输入：
        scanf()：和 printf() 类似， scanf() 可以输入多种类型的数据。
        getchar()、 getche()、 getch()：这三个函数都用于输入单个字符。
        gets()：获取一行数据，并作为字符串处理。
    */
    /* int a, b;
    scanf("%d %d", &a, &b); //终端输入:3【space】2【enter】
    scanf("%d, %d", &a, &b); //终端输入:3,2【enter】
    printf("%d+%d=%d\n", a, b, a+b); */

    /*
        %p 是一个新的格式控制符，它表示以十六进制的形式（带小写的前缀）输出数据的地址。如果写作%P，那么十六进
        制的前缀也将变成大写形式。
    */
    /* int c = 'F';
    int d = 12;
    int e = 452;
    int f = 45;
    printf("&c=%#p &d=%p &e=%p f=%#x\n", &c, &d, &e, f); */

    /* int g = 1, h = 2;
    scanf("g=%d", &g); //终端输入格式:g=100
    scanf("h=%d", &h); //终端输入格式:h=100
    printf("g=%d, h=%d\n", g, h); */


    /*
        char str1[] = "http://c.biancheng.net";
        char *str2 = "C 语言中文网";
        这两种形式其实是有区别的，第一种形式的字符串所在的内存既有读取权限又有写入权限，第二种形式的字符串所
        在的内存只有读取权限，没有写入权限。 printf()、 puts() 等字符串输出函数只要求字符串有读取权限，而 scanf()、
        gets() 等字符串输入函数要求字符串有写入权限，所以，第一种形式的字符串既可以用于输出函数又可以用于输入
        函数，而第二种形式的字符串只能用于输出函数。
        另外，对于第一种形式的字符串，在[ ]里面要指明字符串的最大长度，如果不指明，也可以根据=后面的字符串来
        自动推算，此处，就是根据"http://c.biancheng.net"的长度来推算的。但是在前一个例子中，开始我们只是定义了一
        个字符串，并没有立即给它赋值，所以没法自动推算，只能手动指明最大长度，这也就是为什么一定要写作 char
        url[30]，而不能写作 char url[]的原因。
    */
    /* char letter;
    int age;
    char url[30];
    float price;    
    
    scanf("%c", &letter);
    scanf("%d", &age);
    scanf("%s", url); //可以加&也可以不加&
    scanf("%f", &price);    
    printf("26个英文字母的最后一个是 %c。 \n", letter);
    printf("C语言中文网已经成立%d年了，网址是 %s，开通VIP会员的价格是%g。 \n", age, url, price); */

    /*
        最后需要注意的一点是， scanf() 读取字符串时以空格为分隔，遇到空格就认为当前字符串结束了，所以无法读取含
        有空格的字符串，
    */
    /* char author[30], lang[30], url[30];
    scanf("%s %s", author, lang);
    printf("author:%s \nlang: %s\n", author, lang);
    scanf("%s", url);
    printf("url: %s\n", url); */

    // char ch;
    // ch = getchar(); //获取单个字符
    // ch = getche(); //输入一个字符后会立即读取，不用等待用户按下回车键; 需要头文件#include<conio.h> 而这个头文件是 Windows 特有的，
    /*
        getch() 也没有缓冲区，输入一个字符后会立即读取，不用按下回车键，这一点和 getche() 相同。 getch() 的特别之
        处是它没有回显，看不到输入的字符。所谓回显，就是在控制台上显示出用户输入的字符；没有回显，就不会显示
        用户输入的字符，就好像根本没有输入一样。
    */
    // ch = getch();
    // printf("ch=%c\n", ch);


    //输入字符串
    /*
        gets() 是有缓冲区的，每次按下回车键，就代表当前输入结束了， gets() 开始从缓冲区中读取内容，这一点和 scanf()
        是一样的。 gets() 和 scanf() 的主要区别是：
        scanf() 读取字符串时以空格为分隔，遇到空格就认为当前字符串结束了，所以无法读取含有空格的字符串。
        gets() 认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束，所以，不管输入了多少个空
        格，只要不按下回车键，对 gets() 来说就是一个完整的字符串。
        也就是说， gets() 能读取含有空格的字符串，而 scanf() 不能。
    */
    /* char author[30], lang[30], url[30];
    gets(author); //参数是一个数组类型，返回值是String类型
    printf("author: %s\n", author);
    gets(lang);
    printf("lang: %s\n", lang);
    gets(url);
    printf("url: %s\n", url); */



    return 0;
}