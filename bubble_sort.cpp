// bubble sort code in the repository
#include<iostream>
using namespace std;
void bubbleSort(int ary[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ary[j]>ary[j+1])
                swap(ary[j],ary[j+1]);// hi
        }
    }// hlo
}
int main(){
   
   int n;
   cout<<"provide the array size: ";
   cin>>n;
   int ary[n];
   cout<<"\nprovide the values-\n";
   for(int i=0;i<n;i++)
        cin>>ary[i];
    bubbleSort(ary,n);
    cout<<"the sorted array is-\n";
    for(int i=0;i<n;i++)
        cout<<ary[i]<<' ';

    return 0;
}

