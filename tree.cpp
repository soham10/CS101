#include <simplecpp>
void tree(int L, double trunkLength,float angle,float shrinkage) {
if (L==0) return;
left(angle/2);
forward(trunkLength);
right(angle/2);
tree(L-1, shrinkage*trunkLength,shrinkage*angle,shrinkage);
left(angle/2);
forward(-trunkLength);
right(angle);
forward(trunkLength);
left(angle/2);
tree(L-1, shrinkage*trunkLength,shrinkage*angle,shrinkage);
right(angle/2);
forward(-trunkLength);
left(angle/2);
}
main_program{
turtleSim();
left(90);wait(1);
tree(10,100,120,0.6);wait(1);
right(180);
tree(10,100,120,0.6);wait(5);
}

