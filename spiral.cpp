#include <simplecpp>
main_program{
double i;
turtleSim();
i=0;
repeat(50000){
forward(i/5000);
right(0.36);
i=i+1;
}
wait(10);
}
