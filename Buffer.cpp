#include<stdio.h>
#include<windows.h>

int main()
{
    puts("=====================\n");
    //printf�������л���,windows��ȡ���ˣ�Linux��mac��
    /* printf("geigeigei\n");
    Sleep(5000);
    printf("gei~gei~gei~\n"); */

    //��ʵ�� 1�� scanf() �������룺
    /* int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("a=%d, b=%d, c=%d", a, b, c); */

    //��ʵ�� 2�� scanf() ��ȡʧ�ܣ�
    /*
        ���н����
        b=999
        100 http://c.biancheng.net�L
        a=100, b=999, str=http://c.biancheng.net

        ����һ�� scanf() ʱ�ȴ��û����룬�Ӽ������� 100 http://c.biancheng.net�����»س����� scanf()
        0����ֵ������ a��ͬʱ���ڲ���λ��ָ���ƶ��� 100 ���棻
        ���˵ڶ����� scanf()���������������ݣ���ֱ�Ӷ�ȡ����ʱ�������е�����Ϊ http://c.biancheng.net�L ����ʹ
        �Ŀո�Ҳ���� scanf() ��Ҫ������������ƥ��ʧ���ˣ���������� b ��ֵ�� b ��ֵ���ֲ��䣬�����
        ���� b ��ֵ��ͬ��ԭ��
        ��ζ�Ų����ƶ��ڲ���λ��ָ�룬��ʱ�������е�������Ȼ�� http://c.biancheng.net�L ��ִ�е���
        f() ʱ������Ҫһ���ַ������ⲻ�����ü�©�𣬰� http://c.biancheng.net ��ֵ�� str �ͺ��ˡ�
        nf()�� gets() �ڶ�ȡ�ַ���ʱ����Ի��з�������ѻ��з���Ϊ�ַ��������ݣ�
    */
    /* int e, f=999;
    char str[30];
    printf("f=%d\n", f);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%s", str);
    printf("e=%d, f=%d, str=%s\n", e, f, str); */

    int g;
    gets(g);//������һ���������ͣ�����ֵ��String����
    printf("%d ", g);


    return 0;
}