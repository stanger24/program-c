#include <iostream>
 using namespace std;
main(){
	 char prodi;
	
	cout<<"\t========== MENU ============="<<endl;
	cout<<"\t[1] D3 Teknik Listrik"<<endl;
	cout<<"\t[2] D4 Teknik Listrik"<<endl;
	cout<<"\t[3] D3 Teknik Komputer"<<endl;
	cout<<"\t[4] D4 Teknik Informatika"<<endl;
	cout<<"  Masukkan pilihan anda : "<<endl;
	cin>>prodi;
	cout<<endl;
	
	if(prodi <= 1 ){
		cout<<"Pilihan anda adalah : "<<prodi;
	}else if (prodi = 2){
		cout<<"Pilihan anda adalah : "<<prodi;
	}else if (prodi = 3){
		cout<<"Pilihan anda adalah : "<<prodi;
	}else if (prodi= 4) {
		cout<<"Pilihan anda adalah : "<<prodi;
	}else{
		cout<<"kode prodi salah";
	}
}
