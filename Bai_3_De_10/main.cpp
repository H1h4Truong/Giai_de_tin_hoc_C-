#include <iostream>

using namespace std;
void sap_xep(int n,int z[]){
 for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(z[i]>z[j]){
                int temp=z[i];
                z[i]=z[j];
                z[j]=temp;

            }
        }
    }
}

int main()
{
    int n,i,j,temp=0;
    cout<<"Nhap vao n (n>2) :"<<endl;
    cin>>n;
    while (n<3){
        cout<<"Nhap lai n (n>2) :"<<endl;
        cin>>n;
    }
    int z[n+1];
    for(i=0;i<n;i++){
        cout<<"Nhap vao so thu "<<i<<endl;
        cin>>z[i];
    }
    sap_xep(n,z);
    for(i=0;i<n;i++){
        if(z[i]>0){
            cout<<"So nguyen duong nho nhat la : "<<z[i]<<endl;
            break;
        }
    }
    for(i=0;i<n;i++){
        if(z[i]>0){
            cout<<"So nguyen am lon nhat la : "<<z[i-1]<<endl;
            break;
        }
    }

    int solan=0,m[n];
    temp/* so ky tu cua m */=0;
    m[temp]=z[0];
    for(i=0;i<n/* so ki tu cua z*/;i++){
            if(m[temp]==z[i]){
                cout<<"m["<<temp<<"]="<<m[temp]<<endl;
                continue;
            }else{
                temp+=1;
                m[temp]=z[i];
                cout<<"m["<<temp<<"]="<<m[temp]<<endl;
            }
    }

    for(i=0;i<=temp/* so phan tu cua m */;i++){
        solan=0;
        for(j=0;j<n/* so phan tu cua z */;j++){
            if(z[j]==m[i]){
                solan+=1;
            }
        }
        if(solan>1){
                    cout<<"So "<<m[i]<<" duoc lap lai "<<solan<<" lan "<<endl;
        }
    }
    return 0;
}
