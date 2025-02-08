#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,i,j,temp;
    cout<<"Nhap vao canh 1"<<endl;
    cin>>a;
    cout<<"Nhap vao canh 2"<<endl;
    cin>>b;
    cout<<"Nhap vao canh 3"<<endl;
    cin>>c;
    if((a+b<=c)||(a+c<=b)||(c+b<=a)){
        cout<<a<<";"<<b<<";"<<c<<" khong la 3 canh cua tam giac"<<endl;
    }else{
        double Stg,p=(double(a+b+c))/2;
        Stg=sqrt(p*(p-a)*(p-b)*(p-c));
        printf ("Dien tich cua tam giac la: %.2f\n",Stg);
        if ((c*c==a*a+b*b)||(a*a==c*c+b*b)||(b*b==a*a+c*c)){
            cout<<"Day la tam giac vuong";

        }else if((c*c>a*a+b*b)||(a*a>c*c+b*b)||(b*b>a*a+c*c)){
            cout<<"Day la tam giac tu";
        }else {
            cout<<"Day la tam giac nhon";
        }
    }


    return 0;
}
