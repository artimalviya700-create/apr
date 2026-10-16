#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,6};
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
vec.pop_back();
    for(int i:vec){
        cout << i << endl;
    }
    cout<<vec.at(6)<<endl;
    return 0;
}