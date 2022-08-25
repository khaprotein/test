/*
   HO VA TEN: VO MINH KHA
   MSSV: 6251071044
   LOP: CNTT K62
*/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct{
	 int ngay, thang, nam;
	 string ten;
	 string gt;
	 int tnct;
	 double luong;
}nv;

void nhap(nv &NV){
	cout<< "Nhap ten nv: ";
	cin>>NV.ten;
	fflush(stdin);
	cout<<" Nhap ngay thang nam sinh: ";
	cin>>NV.ngay>>NV.thang>>NV.nam;
	cout<<"Nhap gioi tinh: ";
	cin>>NV.gt;
	fflush(stdin);
	cout<<"Nhap so TNCT: ";
	cin>>NV.tnct;
	if(NV.tnct<12){
		NV.luong=650000.0*1.92;
	}
	 else if(NV.tnct>=12&&NV.tnct<36){
	 	NV.luong=650000.0*2.34;
	
	}
	 else if(NV.tnct>=36&&NV.tnct<60){
	 	NV.luong=650000.0*3;
		
	}
	else if(NV.tnct<=60){
		NV.luong=650000*4.5*1.0;	
	}
}
float tienluong(nv &NV){
	if(NV.tnct<12){
		NV.luong=650000*1.0*1.92;
	}
	 else if(NV.tnct>=12&&NV.tnct<36){
	 	NV.luong=650000*1.0*2.34;
	
	}
	 else if(NV.tnct>=36&&NV.tnct<60){
	 	NV.luong=650000*1.0*3;
		
	}
	else if(NV.tnct<=60){
		NV.luong=650000*4.5*1.0;	
	}
	return NV.luong;
}
void xuat(nv NV){
	cout<<"Ten : "<<NV.ten<<endl;
	cout<<"Ngay sinh: "<<NV.ngay<<"/"<<NV.thang<<"/"<<NV.nam<<endl;
	cout<<"Gioi tinh: "<<NV.gt<<endl;
	
	cout<<"Tien luong: "<<NV.luong<<endl;
	
}
int main(){
	nv NV;
	nhap(NV);
	xuat(NV);
	return 0;
}
