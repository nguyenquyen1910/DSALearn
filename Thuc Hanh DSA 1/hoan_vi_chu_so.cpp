#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string n;
        cin >> n;
        sort(n.begin(), n.end());
        do
        {
            if (n[0] == '0'){
                for(int i=1;i<n.size();i++){
                    cout << n[i];
                }
                cout << endl;
            }
            else cout << n << endl;
        } while (next_permutation(n.begin(), n.end()));
    }
}