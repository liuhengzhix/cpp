#include <stdio.h>

int main()
{
    puts("=======================================\n");
    int n = 100;
    char c = '@';
    float f = 93.96;
    printf("n = %d, c = %c, f = %f.\n", n, c, f);
    puts("C��ҿ��Է���ʹ�� " "ֻ�� long �ĳ����� Win64 ���� " "http://c.biancheng.net\n");

    short e = 99, d = 99; //short int a = 99, d = 99; һ��Ч��
    printf("e = %d, d = %d\n", e, d);

    short a = 10;
    int b = 100;

    //��ȡĳ���������͵ĳ��ȿ���ʹ�� sizeof ������
    int short_length = sizeof a;
    int int_length = sizeof(b);
    int long_length = sizeof(long);
    int char_length = sizeof(char);

    printf("short=%d, int=%d, long=%d, char=%d\n", short_length, int_length, long_length, char_length);

    //�Ϸ��Ķ�����
    int q = 0b101; //�����ʮ����Ϊ 5
    int w = -0b110010; //�����ʮ����Ϊ -50
    int r = 0B100001; //�����ʮ����Ϊ 33
    /*
        ��׼�� C ���Բ���֧������Ķ�����д����ֻ����Щ�������Լ���������չ����֧�ֶ��������֡�
        ���仰˵�����������еı�������֧�ֶ��������֣�ֻ��һ���ֱ�����֧�֣����Ҹ��������İ汾�й�ϵ��
    */
    printf("q = %d\n", q);
    




    return 0;
}