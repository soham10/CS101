#include <simplecpp>
main_program{
float side,q;
int n;
cout<<"Enter side length,no. of squares and factor: ";
cin>>side>>n>>q;
turtleSim();
repeat(n){
repeat(4){
forward(side);right(90);}wait(1);
left(90);penUp();forward((q-1)*side/2);
left(90);forward((q-1)*side/2);right(180);
penDown();wait(2);
side*=q;
}}

