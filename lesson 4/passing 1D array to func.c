/* Adding constant five to the given array using functions(one-dimensional) */
int main()
{
    int a[50],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    add(a,n);
    for(i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;
}
void add(int a[],int n)
{
    int r;
    for(r=0;r<n;r++)
    {
        a[r]=a[r]+5;
    }
}