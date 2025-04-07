#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"KARTIK SHAH"<<endl << "2211201311"<<endl;
    char str[100];
    cout<<"enter the string:"<<endl;
    gets(str);
    char a;
    int l=strlen(str);
    int c=0,v=0;
    for(int i=0 ;i<l;i++)
    {
        a=str[i];
        if(a=='u'||a=='o'||a=='i'||a=='e'||a=='a'||a=='U'||a=='O'||a=='I'||a=='E'||a=='A')
        v++;
        else c++;
    }
    cout<<"vowels: " << v << endl << "consonants: " << c ;



    return 0;
}