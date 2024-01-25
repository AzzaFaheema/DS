#include<stdio.h>
#include<stdlib.h>
int i,n,a[30];
int insert();
int delete();
int search();
int display();
int sort();
int menu();
void main()
{
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    menu();
}
int insert()
{
    int num,pos;
    printf("\nEnter the number to be inserted:");
    scanf("%d",&num);
    printf("\nEnter position:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
	    a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    printf("\nArray after Insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    menu();
}
int delete()
{
    int pos,item;
    printf("\nEnter position to delete:");
    scanf("%d",&pos);
    item=a[pos-1];
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("\nDeleted %d", item);
    printf("\nArray after Deletion:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    menu();
}
int sort()
{
    int temp,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            } 
        }
        
    }
    printf("\nSorted Array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    menu();
} 
int display()
{   
    printf("\nArray:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    menu();
}
int search()
{
    int ele;
    printf("\nEnter element to be searched:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("Element located at %d", i+1);
        }
    }
    menu();
}
int menu()
{
    int ch;
    printf("\n1.Insertion \n2.Deletion \n3.Search \n4.Display \n5.Sort \n6.Exit");
    printf("\nEnter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insert();
                break;
        case 2: delete();
                break;
        case 3: search();
                break;
        case 4: display();
                break;
        case 5: sort();
                break;
        case 6: printf("Exiting");
                exit(1);
    }
}

