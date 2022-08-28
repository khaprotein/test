/*
   HO VA TEN: VO MINH KHA
   MSSV: 6251071044
   LOP: CNTT K62
*/
#include<iostream>
using namespace std;


ditmem
	int kw,tiendien;
	do{
		//string a;
		//cin>>a;
		//fflush(stdin);
		cout<<"nhap so kw dien tieu thu: ";
	    cin>>kw;
	}while(kw<0);
	
	if(kw>0&&kw<100){
		tiendien= kw*2000;
		cout<<"\tdon gia "<<tiendien<<endl;
	}
	else if(kw>101&&kw<200){
		tiendien=100*2000+(kw-100)*2500;
		cout<<"\tdon gia "<<tiendien<<endl;
	}
	else if(kw>201&&kw<300){
		tiendien=100*2000+100*2500+(kw-200)*3000;
		cout<<"\tdon gia "<<tiendien<<endl;
	}
	else{
		tiendien=100*2000+100*2500+100*3000+(kw-300)*5000;
		cout<<"\tdon gia "<<tiendien<<endl;
	}
}
