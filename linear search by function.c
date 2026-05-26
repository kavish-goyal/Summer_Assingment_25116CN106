#include<stdio.h>
void linear(int arr[],int n,int key);

int main()
{
int n,i,key, a[50];

printf("enter the number of elmennts");
scanf("%d",&n);

printf("enter the elements of array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key ");
scanf("%d",&key);

 linear(a,n,key);
return 0;
}

void linear(int arr[],int n, int key)
{
    int flag=0,i ;

    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("the key is found at %d",i+1);
    }
    else
    printf("not found");
}