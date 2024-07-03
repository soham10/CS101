#include <iostream>
using namespace std;
int main(){
	int y,d;
	cin>>y;
	cin>>d;
	if (y%4 !=0 or (y%4==0 and (y%400==100 or y%400==200 or y%400==300))){
		if (d>0 and d<=31) cout<<d<<"/1/"<<y<<endl; //January
		else if (d>=32 and d<=59) cout<<(d-31)<<"/2/"<<y<<endl;//February
		else if (d>=60 and d<=90) cout<<(d-59)<<"/3/"<<y<<endl;//March
		else if (d>=91 and d<=120) cout<<(d-90)<<"/4/"<<y<<endl;//April
		else if (d>=121 and d<=151) cout<<(d-120)<<"/5/"<<y<<endl;//May
		else if (d>=152 and d<=181) cout<<(d-151)<<"/6/"<<y<<endl;//June
		else if (d>=182 and d<=212) cout<<(d-181)<<"/7/"<<y<<endl;//July
		else if (d>=213 and d<=243) cout<<(d-212)<<"/8/"<<y<<endl;//August
		else if (d>=244 and d<=273) cout<<(d-243)<<"/9/"<<y<<endl;//September
		else if (d>=274 and d<=304) cout<<(d-273)<<"/10/"<<y<<endl;//October
		else if (d>=305 and d<=334) cout<<(d-304)<<"/11/"<<y<<endl;//November
		else if (d>=335 and d<=365) cout<<(d-334)<<"/12/"<<y<<endl;//December
	}
	else if (y%4==0){
		if (d>0 and d<=31) cout<<d<<"/1/"<<y<<endl; //January
                else if (d>=32 and d<=60) cout<<(d-31)<<"/2/"<<y<<endl;//February
                else if (d>=61 and d<=91) cout<<(d-60)<<"/3/"<<y<<endl;//March
                else if (d>=92 and d<=121) cout<<(d-91)<<"/4/"<<y<<endl;//April
                else if (d>=122 and d<=152) cout<<(d-121)<<"/5/"<<y<<endl;//May
                else if (d>=153 and d<=182) cout<<(d-152)<<"/6/"<<y<<endl;//June
                else if (d>=183 and d<=213) cout<<(d-182)<<"/7/"<<y<<endl;//July
                else if (d>=214 and d<=244) cout<<(d-213)<<"/8/"<<y<<endl;//August
                else if (d>=245 and d<=274) cout<<(d-244)<<"/9/"<<y<<endl;//September
                else if (d>=275 and d<=305) cout<<(d-274)<<"/10/"<<y<<endl;//October
                else if (d>=306 and d<=335) cout<<(d-305)<<"/11/"<<y<<endl;//November
                else if (d>=336 and d<=366) cout<<(d-335)<<"/12/"<<y<<endl;//December
	}
}
