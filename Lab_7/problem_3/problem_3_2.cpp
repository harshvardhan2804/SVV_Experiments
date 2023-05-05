#include<iostream>
#include<vector>
using namespace std;

int countOne(vector<int>arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
    }
    return count;
}

vector<int>binary(int num){
  vector<int> result;
    while (num > 0) {
        result.insert(result.begin(), num % 2);
        num /= 2;
    }
    return result;
}

int next_num(int n){

    if(n == 0){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    vector<int>orgNum=binary(n);
    int val=n+1;
    while(true){
        vector<int>arr=binary(val);
        if(countOne(orgNum)==countOne(arr)){
            break;
        }
        val++;
        
    }
    return val;
}
int main(){

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    cout<<"Binary of entered number is "<<endl;
    vector<int>ans=binary(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"The next num which has same number of 1's  "<<next_num(n)<<endl;
}