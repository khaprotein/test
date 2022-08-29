/*
  HO VA TEN: VO MINH KHA
  MSSV: 6251071044
  LOP: CNTT K62
*/

#include<iostream>
#include <iomanip>

using namespace std;

typedef struct {
	int ngay,thang,nam;
} date;

void namsinh(date &a){
    do{
    nhap:	
    cout<<"Nhap ngay sinh: ";
	cin>>a.ngay;
	if(a.ngay<=0||a.ngay>31){
		cout<<"\nNgay khong hop le! Moi nhap lai.\n";
		goto nhap;
	}
	nhapthang:
	cout<<"Nhap thang sinh: ";
	cin>>a.thang;
	if(a.thang<=0||a.thang>12){
		cout<<"\n\tThang khong hop le!. Moi ban nhap lai.\n";
		goto nhapthang;
	}
	cout<<"Nhap nam sinh: ";
	cin>>a.nam;
	
	}while(a.ngay<=0||a.thang<0||a.nam<0);
	
	switch(a.thang){
    	
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    		if(a.ngay<1&&a.ngay>31){
    			cout<<"\nNgay thang nam khong hop le!\n\tMoi ban nhap lai.\n";
				goto nhap;
			}
		break;
		
		case 4: case 6: case 9:	case 11:
		    if(a.ngay<1&&a.ngay>30){
    			cout<<"\nNgay thang nam khong hop le!\n\tMoi ban nhap lai.\n";
				goto nhap;
			}
		break;
		
		case 2:
			if(a.ngay<1&&a.ngay>29){
    		cout<<"\nNgay thang nam khong hop le!\n\tMoi ban nhap lai.\n";
				goto nhap;
			}
		break;
	}
}

typedef struct{
	string ten;
	string gioitinh;
	date ntn;
	double tinhoc,triethoc,lthdt;
}sv;

void nhap(sv &SV){
	fflush(stdin);
	cout<<"Nhap ten sv: ";
	getline(cin, SV.ten);
	fflush(stdin);
	cout<<"Nhap gioi tinh: ";
	getline(cin, SV.gioitinh);
	fflush(stdin);
	namsinh(SV.ntn);
	cout<<"Nhap diem tin hoc: ";cin>>SV.tinhoc;
	cout<<"Nhap diem triet hoc: ";cin>>SV.triethoc;
	cout<<"Nhap diem lap trinh huong doi tuong: ";cin>>SV.lthdt;
	
}

void nhapds(sv SV[],int n){
	
	for(int i=0;i<n;i++){
		cout<<"\nNhap sv thu "<<i+1<<endl;
		nhap(SV[i]);
	}
}

void xuatdate(date a){
	cout<<" "<<a.ngay<<"/ "<<a.thang<<"/ "<<a.nam<<endl;
}
void xuat(sv SV){
	cout<<"Ho va ten: "<< SV.ten << endl;
	cout<<"Gioi tinh: "<< SV.gioitinh <<endl;
    cout<<"Ngay thang nam sinh: ";
    xuatdate(SV.ntn);
    cout<<"Diem tin hoc: "<<SV.tinhoc<<"\nDiem triet hoc: "<<SV.triethoc<<"\nDiem lthdt: "<<SV.lthdt<<endl;
	cout<<" Diem trung binh: "<<setprecision(2)<<((SV.tinhoc+SV.triethoc+SV.lthdt)/3)<<endl;  
}
void xuatds(sv SV[],int n){
	for(int i=0;i<n;i++){
		cout<<"__________________"<<endl;
		cout<<"Sinh vien thu "<<i<<endl;
		xuat(SV[i]);
	}
}
int main(){
	sv SV[10];
	int n;
	nhap:
	cout<<"Nhap so luong sv: ";
	cin>>n;
	if(n<=0){
	   	cout<<"Nhap lai! "<<endl;
	   	goto nhap;
	}
	nhapds(SV,n);
	xuatds(SV,n);
	return 0;
}
