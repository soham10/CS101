#include <simplecpp>
main_program{
int a,d,n;
cin>>a>>d>>n;
cout<<a<<" ";
int b;
repeat(n-1){
b=a+d;
cout<<b<<" ";
a=b;
}
cout<<"\n";
}
