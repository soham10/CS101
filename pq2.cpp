#include <simplecpp>
main_program{
        int N,y=0;
        cin>>N;
        while (int(N/pow(10,y))!=0){y++;}
        int product=1,k=y;
        while(k>int(y/2)){
                product*=((int(N/pow(10,k-1))-int(N/pow(10,k))*10)+(int(N/pow(10,y-k))-int(N/pow(10,y-k+1))*10));
                k--;}
        cout<<product<<endl;
        }
