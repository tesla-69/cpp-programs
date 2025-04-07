#include<iostream>
using namespace std;

int main()
{
    cout<<"KARTIK SHAH"<<endl << "2211201311"<<endl;
    int n;
    cout<<"enter the size of array :"<<endl;
    cin >> n;
    int *ptr=new int[n];
    cout <<"enter elements of array:"<<endl;
    for (int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    for (int i=0 ; i<n; i++){
        for (int j=0;j<n;j++){
            if(*(ptr+j)>*(ptr+i)){
                *(ptr+j)=*(ptr+j)^*(ptr+i);
                *(ptr+i)=*(ptr+j)^*(ptr+i);
                *(ptr+j)=*(ptr+j)^*(ptr+i);
            }
        }
    }cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++)
    cout<<*(ptr+i)<<" ";


    return 0;
}