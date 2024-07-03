#include <simplecpp>
#include <iostream>
main_program{

int nsides,length;
cout<<"Enter Number of  sides: "; //Enter sides of polygon
cin>>nsides;
cout<<"\nEnter length of side: "; //Enter length of the side
cin>>length;

turtleSim();
repeat(nsides){
forward(length);
right(360/nsides);
}
wait(10);

}
