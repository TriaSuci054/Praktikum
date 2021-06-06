 #include <iostream> 
 #include <math.h> 
 #include <iomanip.h>
 #include <ctype.h> 
 void isiData(); 
 void tampilData(); 
 int n; 
 char a; 
 struct data 
 	{ 
	 long tunjangan; 
	 string jabatan; 
	 long gapok; 
	int gol; 
	 long totalgaji; 
	char nip[5]; 
	char nama[30]; 
	}karyawan[50]; 
 void isiData(data*karyawan) 
 		{ 
		 cout<<" Jabatan "<<endl; 
		 cout<<" Jabatan d = Direktur " <<endl; 
		 cout<<" Jabatan m = Manager " <<endl; 
		 cout<<" Jabatan s = Staff " <<endl; 
		 cout<<"====================================n"; 
		 cout<<" Golongan "<<endl; cout<<" 1. golongan 1 " <<endl; 
		 cout<<" 2. golongan 2 " <<endl; 
		 cout<<" 3. golongan 3 " <<endl; 
		 cout<<"====================================n"; 
		 cout<<"Masukkan jumlah karyawan :";cin>>n; 
		 cout<<"====================================n"; 
	int i; 
	for(i=1;i<n;i++) 
	{ 
clrscr(); 
	cout<<"*********Data Karyawan PT. Sejahtera Makmur***********"<<endl; 
	cout<<"Data ke-"<<(i+1)<<endl; 
	cout<<"NIP : ";                               cin>>karyawan[i].nip; 
	cout<<"Nama Karyawan : ";                     cin>>karyawan[i].nama; 
	cout<<"Jabatan : ";                           cin>>karyawan[i].jabatan; 
	cout<<"Golongan : ";                          cin>>karyawan[i].gol; 
  if (karyawan[i].jabatan=='d') 
  {karyawan[i].tunjangan=5000000;} 
  else if(karyawan[i].jabatan=='m') 
  {karyawan[i].tunjangan=2000000;} 
  else if(karyawan[i].jabatan=='s')
  {karyawan[i].tunjangan=200000;} 
  else 
   cout<<"Jabatan tidak ada"<<endl; 
  if (karyawan[i].gol==1) 
   {karyawan[i].gapok=2000000;} 
  else if(karyawan[i].gol==2) 
   {karyawan[i].gapok=2500000;} 
  else if(karyawan[i].gol==3) 
   {karyawan[i].gapok=3700000;} 
  else 
  	cout<<"golongan tidak ada"<<endl; 
	} 
	} 
  void tampilData(data*karyawan) 
  { 
  cout<<"n"; 
  cout<<"*****************************P.T Sejahtera Makmur*****************************n"; 
  cout<<"******************************************************************** **********n"; 
  cout<<"|No.| Nip | Nama | Jabatan | Golongan | tunjaangan | gapok |total gaji|n"; 
  cout<<"| | | Karyawan | | | | | |n"; 
  cout<<"******************************************************************** ***********n"; 
  int i; 
  for(i=1;i<n;i++) 
  { 
    cout<<" "<<setiosflags(ios::left)<<setw(4)<<i; 
	cout<<setiosflags(ios::left)<<setw(7)<<karyawan[i].nip; 
	cout<<setiosflags(ios::left)<<setw(11)<<karyawan[i].nama; 
	cout<<setiosflags(ios::left)<<setw(11)<<karyawan[i].jabatan; 
	cout<<setiosflags(ios::left)<<setw(11)<<karyawan[i].gol; 
	cout<<setiosflags(ios::left)<<setw(12)<<karyawan[i].tunjangan; 
	cout<<setiosflags(ios::left)<<setw(10)<<karyawan[i].gapok; karyawan[i].totalgaji=karyawan[i].tunjangan+karyawan[i].gapok; 
	cout<<setiosflags(ios::left)<<setw(13)<<karyawan[i].totalgaji; 
	cout<<"******************************************************************** *********n"; 
	} 
	} 
	main() 
	{ 
		data karyawan[50]; 
		isiData(karyawan); 
		clrscr(); 
		cout<<"Isi Data karyawan adalah : n"; 
		cout<<"n"; 
		tampilData(karyawan); 
	}
	goto ulang; 
	} 
	ulang: 
	{ 
		cout<<"Apakah Anda ingin melanjutkan lagi?"<<endl; 
		cout<<"Tekan y jika ya ,Tekan t jika Tidak "<<endl; 
		cout<<"*************************************"<<endl; 
		cin>>a; 
		if (a=='y') 
			{ 
				goto isiData; 
			} 
		else 
			{ 
				goto keluar; 
			} 
		} 
	keluar : 
	{ 
	clrscr(); 
	}
}

