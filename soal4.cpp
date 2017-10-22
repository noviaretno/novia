#include <iostream>
using namespace std;

int main (){
	double luasRumah = 42;
	double lantaipkt = 193*1215;
	double luas1box = lantaipkt*8/1000000;
	
	cout << " luas rumah           = "<<luasRumah<<" m2"<<endl;
	cout << " luas 1 box parket    = "<<luas1box<<" m2"<<endl;
	
	double jumlahboxP, BiayaP, BiayaPG, TotalB;
	
	jumlahboxP = luasRumah/luas1box;
	cout <<"jumlah box parket        = "<<jumlahboxP<<endl;
	BiayaP = jumlahboxP*500;
	cout<< " Biaya parket (Rp)       = "<<BiayaP<<endl;
	BiayaPG = luasRumah*20;
	cout<<" Biaya pasang (rp)        = " <<BiayaPG<<endl;
	TotalB = BiayaP+BiayaPG;
	cout<< " total Biaya (rp)        =" <<TotalB<<endl;
	
}
