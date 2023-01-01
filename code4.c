#include<time.h>
#include<stdio.h>
#include<stdlib.h>//用随机数来控制输入
int main()
{
    srand(time(NULL));
    int m,n,sum=0,result=0,arr[20]={0};
    int i;
    m=rand()%10;
    n=rand()%10;
    while(m==0||n==0)//m和n不能为零
    {   
        m=rand()%10;
        n=rand()%10;
    }
    printf("%d %d\n",m,n);
    for(i=0;i<n;i++)
    {   
        arr[i]=rand()%10;
        while(arr[i]==0)//控制让每个同学取得快递数不为零
            arr[i]=rand()%10;
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
        sum=sum+arr[i];
    result=sum/m;
    printf("\n%d",result);//这里最后的输出结果本不一定为正整数，但根据题目要求，我这里按正整数输出了
}