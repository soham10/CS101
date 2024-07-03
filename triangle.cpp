#include <simplecpp>
main_program{
float a,b,c;
cout<<"Enter sides one by one: ";
cin>>a>>b>>c;
turtleSim();
forward(a);right(180-arccosine((a*a+b*b-c*c)/(2*a*b)));
forward(b);right(180-arccosine((b*b+c*c-a*a)/(2*b*c)));
forward(c);wait(10);
}
