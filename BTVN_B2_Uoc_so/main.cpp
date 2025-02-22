#include <iostream>
#include <ctime>
using namespace std;
int one (int n){
    int i=n/2;
    while (n%i!=0){
        i=i-1;
    }
    return i;
}
int three (int n){
    int souoclonnhat=0,temp=0,souoc,i,j;
    for(i=1;i<n;i++){
        souoc=0;
        for(j=1;j<i;j++){

            if(i%j==0){
                souoc+=1;
            }
        }
        if(souoc>souoclonnhat){
            souoclonnhat=souoc;
            temp=i;
        }
    }
    return temp;
}
int main()
{
    unsigned long  n,i,j;
    cout<<"Nhap vao n:"<<endl;
    cin>>n;
    clock_t start = clock();
    for(i=n/2;i<n;i--){
        if(n%i==0){
            cout<<"1.Uoc lon nhat cua "<<n<<" la "<<i<<endl;


            break;
        }
    }
    clock_t end = clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC; // Chuyển về giây
    cout << "thoi gian thuc thi: " << elapsed_time << " giay\n";
         start = clock();
        cout<<"2.Uoc lon nhat cua "<<n<<" la "<<one(n)<<endl;


    i=n,j=0;
    while(i>0){
        j=j+i%10;
        i=i/10;
    }
    cout<<"Tong cac chu so cua "<<n<<" la "<<j<<endl;

    cout<<"so co nhieu uoc nhat la: "<<three(n)<<endl;


    return 0;
}
