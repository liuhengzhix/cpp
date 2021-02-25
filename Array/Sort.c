#include <stdio.h>
#include <windows.h>

int main()
{
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int i, j, temp, isSorted, count = 0;
    //优化算法：最多进行 n-1 轮比较
    for (i = 0; i < 10 - 1; i++)
    {
        count++;
        isSorted = 1; //假设剩下的元素已经排序好了
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                isSorted = 0; //一旦需要交换数组元素，就说明剩下的元素没有排序好
            }
        }
        if (isSorted)
            break; //如果没有发生交换，说明剩下的元素已经排序好了
    }

    //遍历排序好的数组
    for (i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
        if (i == 9)
        {
            printf("\n");
        }
    }
    printf("%d轮\n", count);

    /*
        普通冒泡排序的轮数是元素个数减1
        优化的冒泡排序的轮数最多是元素个数减一
        第1轮:第一个数与后面元素个数减1个元素相比
        第2轮:第一个数与后面元素个数减2个元素相比
        第3轮:第一个数与后面元素个数减3个元素相比
                   ...
        所以比较的次数是(n-1)+(n-2)+(n-3)+(n-4)+...+1
        打开或隐藏终端ctrl+j
    */
    system("pause");
    return 0;
}