#include<iostream>
using namespace std;
int main()
{
    vector<int> arr;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }

    for(auto i : arr){
        cout<<i<<" ";
    }


    return 0;
}