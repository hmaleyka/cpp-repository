#include<iostream>
using namespace std;
int main()
{
int a[]{2,3,4,87,13,16};
int size{sizeof(a) / sizeof(int)}, i{0};

while(i<size)
{
if(a[i]%2 !=0)
 cout<<a[i]<<" ';
 i++;
}
cout<<endl;
return 0;
}


