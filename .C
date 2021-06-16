#include <stdio.h>

int main() {
int a[100];
int n;
int d;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
scanf("%d",&d);
for(int i=d;i<n;i++)
{
    printf("%d ",a[i]);
}
for(int i=0;i<d;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}
