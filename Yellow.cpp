#include<stdio.h>
#include<windows.h>

int main()
{

    /*
        ������ʽΪ��
        SetConsoleTextAttribute( HANDLE hConsoleOutput, WORD wAttributes );
        hConsoleOutput ��ʾ����̨���������������ͨ�� GetStdHandle(STD_OUTPUT_HANDLE)����ã�
        wAttributes ��ʾ������ɫ�ͱ�����ɫ��
        ���ﲻȥ׷�� HANDLE �ĺ��壬������ Windows �����л���ϸ���⡣
        WORD �� windows.h �ж��壬��ͬ�� unsigned short��ʹ�õ� 4 λ��ʾ���֣�ǰ������ɫ���� 4 λ��ʾ����
        ������ɫ����������ȡֵΪ xx�� x Ϊһλ 16 ���������� 0~F ������ʹ�ã�����������ϡ�
        0~F �ֱ�������ɫ���£�
        0 = ��ɫ 8 = ��ɫ 1 = ���� 9 = ��ɫ
        2 = ���� A = ��ɫ 3 = ���� B = ��ǳ��
        C = ��ɫ 4 = ���� 5 = ��ɫ D = ����
        6 = ��ɫ E = ���� 7 = ��ɫ F = ����
    */

    puts("==================================");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0xC );
    puts("��ɫ����");




    return 0;
}