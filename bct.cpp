/*
   HO VA TEN: VO MINH KHA
   MSSV 6251071044
   LOP: CNTT K62
*/

#include<stdio.h>
#include<stdlib.h>

int p[4]={0,0,1,1},q[4]={0,1,0,1},kq[4];



void xuat(){
	for(int i=0;i<4;i++){
		//
		printf("\n\t%d\t%d\t%d\n",p[i],q[i],kq[i]);
	}
	printf("\n\t-------------------------------------------------\n\n");
}
void phudinh(){
	printf("\tP\tQ\t!P\t!Q\n");
	for(int i=0;i<4;i++){
		printf("\t%d\t%d\t%d\t%d\n",p[i],q[i],!p[i],!q[i]);
	}
	printf("\n\t-------------------------------------------------\n\n");	
}

int hoi(){
	for(int i=0;i<4;i++){
		kq[i]=p[i]&q[i];
	}
}

int tuyen(){
	for(int i=0;i<4;i++){
		kq[i]=p[i]|q[i];
	}
}

void keotheo(){
	for(int i=0;i<4;i++){
	    if(p[i]==1&&q[i]==0){
	    	kq[i]=0;
		}
		else{
			kq[i]=1;
		}	
	}		
}

void keo2chieu(){
	for(int i=0;i<4;i++){
		if(p[i]==0&&q[i]==0||p[i]==1&&q[i]==1){
			kq[i]=1;
		}
		else{
			kq[i]=0;
		}
	}
}
void menu(){
	printf("Cac menh de:\n");
	for(int i=0;i<4;i++){
		printf("\t%d\t%d\n",p[i],q[i]);
	}
	printf("Menu:\n");
	printf("1:Phep phu dinh\n2:Phep hoi\n3:Phep tuyen\n4:Phep keo theo\n5:Phep keo theo 2 chieu\n6:Thoat chuong trinh\n");
}
int main(){
	while(1){
		menu();
	int lc;
	printf("Nhap phep toan muon thuc hien: ");
	scanf("%d",&lc);
	switch(lc){
		case 1:
		    printf("\n\tBang chan tri:\n");
			phudinh();
			break;
		case 2:
			printf("\n\tBang chan tri:\n");
			printf("\tP\tQ\tP^Q\n");
			hoi();
			xuat();	
			break;
		case 3:
			printf("\n\tBang chan tri:\n");
			printf("\tP\tQ\tPvQ\n");
			tuyen();
			xuat();	
			break;
		case 4:
			printf("\n\tBang chan tri:\n");
			printf("\tP\tQ\tP->Q\n");
			keotheo();
			xuat();	
			break;
		case 5:
			printf("\n\tBang chan tri:\n");
			printf("\tP\tQ\tP<->Q\n");
			keo2chieu();
			xuat();	
			break;
		case 6:
		    exit(0);
		    break; 	
	    default:
			printf("\nkhong ton tai lua chon thu %d moi ban chon lai",lc);
			break;				
	}
	}
	
	return 0;
}
