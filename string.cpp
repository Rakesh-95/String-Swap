#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],ch;
int i,j,k,n;
printf("enter string: ");
gets(a);
n=strlen(a);
for(i=0;i<n;i=i+4) // For first even index
{
j=i+2; // For corresponding next even index
if(j<n) // check for upper bound
{
ch=a[i];
a[i]=a[j]; // swapping
a[j]=ch;
}
else
{
break;
}
}
for(i=1;i<n;i=i+4) // For first odd index
{
k=i+2; // For corresponding next odd index
if(k<n) // Check for upper bound
{
ch=a[i];
a[i]=a[k]; //Swapping
a[k]=ch;
}
else
{
break;
}
}
printf("Swapped string: %s",a);
}
//OUTPUT :- Enter string: ABCDEFGHIJK
//Swapped string: CDABGHEFKJI
