
/* Find an element in an array */

#include <stdio.h>

void main()
{
        int a[]={1, 32, 17, 45, 76, 23, 14, 52, 98, 4};
        int num,i,p,flag=0;

        printf("Enter a value :");
        scanf("%d",&num);

        for(i=0;i < 10;i++)
        {
                if(a[i]==num)
                {
                        printf("Element index is %d \n",i);
                        flag = 1;
                        break;
                }
        }

        if (flag == 0)
        {
                printf("not foun d in arry\n");
        }

}
