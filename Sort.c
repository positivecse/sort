void main()
{
int a[1000],i,j,temp,n;
clrscr();
printf("Enter the Number of elements in an array:");
scanf("%d", &n);
printf("\nEnter %d elements of an Array \n",n);
for (i= 0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
for (j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n sorted array:\n");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
