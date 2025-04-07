#include <iostream>
using namespace std;
namespace satyam{
    int tl=1;
}
int fun(int a,int b){
    b=0;
    return a+b;
}
class sat{
    private:
        int marks; 
    public:
        void setter(int value){
            marks=value;
        }
        int getter(){
            return marks;
        }
        sat operator-(sat s2){
            sat temp;
            temp.marks=marks+s2.marks;
            return temp;
        }
         friend ostream& operator<<(ostream& output,sat &s);
};
ostream& operator<<(ostream& output,sat &s){
    output<<s.marks;
    return output;
}
int main()
{
    int a=satyam::tl;
    sat s;
    s.setter(5);
    // cout<<s.getter();
    sat s1,s2;
    s1.setter(10);
    s2.setter(15);
    sat s3;
    s3=s1-s2;
    // cout<<s3.getter();
    // cout<<fun(5,6);
    cout<<s3;
    int t=5;
    int &y=t;
    y=7; 
    t++; 
    cout<<y<<endl;
    cout<<t;
    return 0;
}