#include<iostream>
main()
{
typedef struct datapeg
{
int nip[5];
long gapok [5],tunj[5],total[5];
char nama [20][5];
char gol[5];
};
datapeg tblpeg;

int i;
for (i=0;i<5;i++)
{
        cout<<"NIP :";cin>>tblpeg.nip[i];
        cout<<"Nama :";cin>>tblpeg.nama[i];
        cout<<"Golongan :";cin>>tblpeg.gol[i];

        if (tblpeg.gol[i]=='A' || tblpeg.gol[i] == 'a')
        {
        tblpeg.gapok[i]=2000000;
        tblpeg.tunj[i]=200000;
        cout<<"Gaji Pokok :"<<tblpeg.gapok[i]<<endl;
        cout<<"Tunjangan :"<<tblpeg.tunj[i]<<endl;
        tblpeg.total[i] =  tblpeg.gapok[i]+tblpeg.tunj[i];
        cout<<"Total Gaji :"<<tblpeg.total[i]<<endl;
        }
        else if (tblpeg.gol[i]=='B' || tblpeg.gol[i] == 'b')
        {
        tblpeg.gapok[i]=3000000;
        tblpeg.tunj[i]=300000;
        cout<<"Gaji Pokok :"<<tblpeg.gapok[i]<<endl;
        cout<<"Tunjangan :"<<tblpeg.tunj[i]<<endl;
        tblpeg.total[i] =  tblpeg.gapok[i]+tblpeg.tunj[i];
        cout<<"Total Gaji :"<<tblpeg.total[i]<<endl;
        }
        else if (tblpeg.gol[i]=='C' || tblpeg.gol[i] == 'c')
        {
        tblpeg.gapok[i]=4000000;
        tblpeg.tunj[i]=400000;
        cout<<"Gaji Pokok :"<<tblpeg.gapok[i]<<endl;
        cout<<"Tunjangan :"<<tblpeg.tunj[i]<<endl;
        tblpeg.total[i] =  tblpeg.gapok[i]+tblpeg.tunj[i];
        cout<<"Total Gaji :"<<tblpeg.total[i]<<endl;
        }
        else
        cout<<"Golongan Tidak Diketahui"<<endl;

}
return 0;
}
