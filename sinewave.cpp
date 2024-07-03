#include <simplecpp>
main_program{
turtleSim();
int i=0;
repeat(30){
left(90);forward(200*sine(i*10));
forward(-200*sine(i*10));
right(90);forward(10);
i++;}
wait(10);
}
