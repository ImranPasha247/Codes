#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;     
        bool found = false;
        for (int i = 1; i < n - 1; ++i) {
            string a = s.substr(0, i);
            string b = s.substr(i, 1);
            string c = s.substr(i + 1);
            string ac = a + c;

            if (ac.find(b) != string::npos) {
                found = true;
                break;
            }
        }
        if(found == true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
