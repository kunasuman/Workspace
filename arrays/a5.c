
/* Reverse two arrays and store in 3rd array */

#include<stdio.h>

void main()
{
        int i,n;
        int a[5],b[5],c[10];

        printf("enter the values a\n");
        i=0;
        while(i<5)
        {
                scanf("%d",&a[i]);
                i++;
        }

        printf("enter the values b\n");
        i=0;
        while(i<5)
        {
                scanf("%d",&b[i]);
                i++;
        }
        printf("a,b values strd in c\n");
        i=0;
        while(i<5)
        {
                c[4 - i] = a[i];

          //    c[9 - i] = b[i];
                i++;
        }

        i = 0;
        while(i < 5)
        {
                c[9 - i] = b[i];
                i++;
        }

	i = 0;
        while(i<10)
        {
                printf("%d ",c[i]);
                i++;

        }
	printf("\n");

}
