#include <iostream>

using namespace std;

int main() {
    
    int n,m,t;
    string str;
    cin>>t;
    while (t--){
        cin>>n>>m;
        long long count=0;
        
        for(int i=0;i<n;i++){
            cin>>str;
             m-=str.length();
            if (m<0)
                continue;
            count ++;
            
            
        }
        cout<<count<<"\n";
    }
    
}