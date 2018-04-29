#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],sum=0,i;
    int max,min;
    float avg;
    for(i=0 ; i<10 ; i++)
    {
        printf("enter a[%d] in the array : ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        max=a[0];
        min=a[0];
        if(max<a[i])
        {
            max=a[i];

        }
        if(min>a[i])
        {
            min=a[i];

        }
    }
    avg=sum/10;
    printf("sum= %d \n",sum);
    printf("average= %f\n",avg);
    printf("max =%d\n",max);
    printf("min =%d\n",min);

    return 0;
}
