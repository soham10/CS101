#include <simplecpp>
main_program{
turtleSim();
repeat(3000){
forward(0.1);left(0.12);}
repeat(6){
repeat(3000){
forward(0.1);right(0.12);}
repeat(500){
forward(0.1);left(0.12);}}
wait(10);
}

