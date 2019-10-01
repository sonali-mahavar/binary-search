#include<conio.h>
#include<iostream.h>
int main()
{
 clrscr();
 int start,end,mid,search,i,n,a[10];
 cout<<"Enter the numbers of elements:\n";
 cin>>n;
 cout<<"Enter the numbers in the binary list:\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"Enter the number you want to search:\n";
 cin>>search;
 start=0;
 end=n-1;
 mid=(start+end)/2;
 while(start<=end)
 {
  if(a[mid]<search)
  start=mid+1;
  else if(a[mid]==search)
  {
   cout<<"Number Found in Binary Search is:\n"<<search;
   break;
  }
  else
  end=mid-1;
  mid=(start+end)/2;
 }
if(start>end)
cout<<"Number Not Found!"<<search;
getch();
return 0;
}

