#include <stdio.h>
int sum(int n);


int main()
{
    /*
        什么是函数？
        函数就是一段封装好的，可以重复使用的代码，它使得我们的程序更加模块化，不需要编写大量重复的代码。
        函数可以提前保存起来，并给它起一个独一无二的名字，只要知道它的名字就能使用这段代码。
        函数还可以接收数据，并根据数据的不同做出不同的操作，最后再把处理结果反馈给我们
        从表面上看，函数在使用时必须带上括号，有必要的话还要传递参数，函数的执行结果也可以赋值给其它变量。
    */
    /*
        库函数和自定义函数
        C 语言自带的函数称为库函数（Library Function） 。 库（Library） 是编程中的一个基本概念，可以简单地认为它是
        一系列函数的集合，在磁盘上往往是一个文件夹。 C 语言自带的库称为标准库（Standard Library） ，其他公司或个
        人开发的库称为第三方库（Third-Party Library） 。
    */

    /*
        函数不能嵌套定义
        强调一点， C 语言不允许函数嵌套定义；也就是说，不能在一个函数中定义另外一个函数，必须在所有函数之外定
        义另外一个函数。 main() 也是一个函数定义，也不能在 main() 函数内部定义新函数。
    */

    /*
        形参和实参的区别和联系
            1) 形参变量只有在函数被调用时才会分配内存，调用结束后，立刻释放内存，所以形参变量只有在函数内部有效，
            不能在函数外部使用。
            2) 实参可以是常量、变量、表达式、函数等，无论实参是何种类型的数据，在进行函数调用时，它们都必须有确定
            的值，以便把这些值传送给形参，所以应该提前用赋值、输入等办法使实参获得确定值。
        3) 实参和形参在数量上、类型上、顺序上必须严格一致，否则会发生“类型不匹配”的错误。当然，如果能够进行
        自动类型转换，或者进行了强制类型转换，那么实参类型也可以不同于形参类型。
            4) 函数调用中发生的数据传递是单向的，只能把实参的值传递给形参，而不能把形参的值反向地传递给实参；换句
            话说，一旦完成数据的传递，实参和形参就再也没有瓜葛了，所以，在函数调用过程中，形参的值发生改变并不会
            影响实参。
    */

    /*
        return 语句是提前结束函数的唯一办法。 return 后面可以跟一份数据，表示将这份数据返回到函数外面； return 后
        面也可以不跟任何数据，表示什么也不返回，仅仅用来结束函数。
    */


    /*
        函数声明以及函数原型
        所谓声明（Declaration） ，就是告诉编译器我要使用这个函数，你现在没有找到它的定义不要紧，请不要报错，稍
        后我会把定义补上。
        函数声明的格式非常简单，相当于去掉函数定义中的函数体，并在最后加上分号;，如下所示：
        dataType functionName( dataType1 param1, dataType2 param2 ... );
        也可以不写形参，只写数据类型：
        dataType functionName( dataType1, dataType2 ... );
        函数声明给出了函数名、返回值类型、参数列表（重点是参数类型）等与该函数有关的信息，称为函数原型（Function
        Prototype） 。函数原型的作用是告诉编译器与该函数有关的信息，让编译器知道函数的存在，以及存在的形式，即
        使函数暂时没有定义，编译器也知道如何使用它。
    */

    int i = sum(3);

    /*
        局部变量
        定义在函数内部的变量称为局部变量（Local Variable） ，它的作用域仅限于函数内部， 离开该函数后就是无效的，
        再使用就会报错。


        1) 在 main 函数中定义的变量也是局部变量，只能在 main 函数中使用；同时， main 函数中也不能使用其它函数
            中定义的变量。 main 函数也是一个函数，与其它函数地位平等。
        2) 形参变量、在函数体内定义的变量都是局部变量。 实参给形参传值的过程也就是给局部变量赋值的过程。
        3) 可以在不同的函数中使用相同的变量名，它们表示不同的数据，分配不同的内存，互不干扰，也不会发生混淆。
        4) 在语句块中也可定义变量，它的作用域只限于当前语句块。 
    */

    /*
        全局变量
        在所有函数外部定义的变量称为全局变量（Global Variable） ，它的作用域默认是整个程序，也就是所有的源文件，
        包括 .c 和 .h 文件。 
        例如：
        ======================================================================
            int a, b; //全局变量
            void func1(){
                //方法体
            }

            float x,y; //全局变量
            int func2(){
                //方法体
            }

            int main(){
                return 0;
            }
        =====================================================================    
    */

    /*
        C 语言变量的作用域（加深对全局变量和局部变量的理解）
        变量的作用域由变量的定义位置决定，在不同位置定义的变量，它的作用域是不一样的。 本节我们只讲解两种变量，
        一种是只能在函数内部使用的变量，另一种是可以在所有代码文件中使用的变量。

        在函数内部定义的变量，它的作用域也仅限于函数内部，出了函数就不能使用了，我们将这样的变量称为局部变量
        （Local Variable） 。

        C 语言允许在所有函数的外部定义变量，这样的变量称为全局变量（Global Variable） 。
        全局变量的默认作用域是整个程序，也就是所有的代码文件，包括源文件（.c 文件）和头文件（.h 文件） 。如果给
        全局变量加上 static 关键字，它的作用域就变成了当前文件，在其它文件中就无效了。

        在一个函数内部修改全局变量的值会影响其它函数，全局变量的值在函数内部被修改后并不会自动恢复，
        它会一直保留该值，直到下次被修改。

    */


    /*
        C 语言规定，在同一个作用域中不能出现两个名字相同的变量，否则会产生命名冲突；但是在不同的作用域中，允
        许出现名字相同的变量，它们的作用范围不同，彼此之间不会产生冲突。这句话有两层含义：
        不同函数内部可以出现同名的变量，不同函数是不同的局部作用域；
        函数内部和外部可以出现同名的变量，函数内部是局部作用域，函数外部是全局作用域。
    */




    return 0;
}