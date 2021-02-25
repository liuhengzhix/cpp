//计算从m加到n的和
int sum(int m, int n)
{
    int i, sum = 0;
    for (i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}