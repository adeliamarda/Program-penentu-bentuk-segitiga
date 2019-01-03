#include<iostream>
using namespace std;
int main()
{
    float sudut;
    cout<<"program untuk mengecek bentuk segitiga sama sisi atau tidak"<<endl;
    cout<<"masukan besarnya sudut segitiga"<<endl;
    cin>>sudut;
    if(sudut==0)
        cout<<"jenis segitiga adalah sama sisi"<<endl;
    else
        cout<<"jenis segitiga bukan sama sisi"<<endl;
    return 0;
}
