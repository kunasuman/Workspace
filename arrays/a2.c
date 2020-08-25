#include <stdio.h>
void main()
{
    int a[]={1, 32, 17, 45, 76, 23, 14, 52, 98, 4};
    int num,i,p,c=0;
   // int n=sizeof(a)/sizeof(a[0]);
    int n;
    printf("Enter a value :\n");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {

        if(a[i]==num)
        {
            p=i;
            printf("Element index is %d",p);
            c=1;
            break;
        }
        else
        {
	    printf("not foun d in arry\n");
          //c=0;
        }

    }
}
