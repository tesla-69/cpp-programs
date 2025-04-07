#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node * next;
};
int binarySearch(int arr[],int size , int search){

    int s=0 ,e=size-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==search){
            return mid;
        }
        else if (arr[mid]>search){
            e=mid-1;
        }
        else if(arr[mid]<search){
            s=mid+1;
        }
    }

}
int main()
{
    int even[]={2,3,5,7,9,22};
    int odd[]={1,2,4,6,8,9,10};



    return 0;
}