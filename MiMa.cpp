#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define PWDLEN 20

void getpwd(char *pwd, int pwdlen);

int main()
{
    char pwd[PWDLEN + 1];
    printf("Input password: ");
    getpwd(pwd, PWDLEN);
    printf("The password is: %s\n", pwd);
    return 0;
}

/**
 * 获取用户输入的密码
 * @param pwd char* 保存密码的内存的首地址
 * @param pwdlen int 密码的最大长度
 **/
void getpwd(char *pwd, int pwdlen)
{
    char ch = 0;
    int i = 0;
    while (i < pwdlen)
    {
        ch = getch();

        if (ch == '\r')
        { //回车结束输入
            printf("\n");
            break;
        }
        if (ch == '\b' && i > 0)
        { //按下删除键
            i--;
            printf("\b \b");
        }
        else if (isprint(ch))
        { //输入可打印字符
            pwd[i] = ch;
            printf("*");
            i++;
        }
    }
    pwd[i] = 0;
}

/*
    用户按下回车键时， getchar() 将读取到\n 字符，而 getch() 将读取到\r 字符。也就是说，对于不同的字符输
    入函数，回车键产生的字符不同，这个细节读者要引起注意。
*/