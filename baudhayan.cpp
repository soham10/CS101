#include <simplecpp>
main_program{
int a,b,c;
cin>>a>>b>>c;
turtleSim();
repeat(4){
forward(a);right(90);}
left(90);wait(1);
repeat(4){
forward(b);left(90);}
penUp();forward(b);right(180-arctangent2(a,b));
penDown();wait(1);
repeat(4){
forward(c);left(90);}
wait(10);
}
