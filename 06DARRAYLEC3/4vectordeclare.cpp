#include<iostream>
#include<vector>
using namespace std;    
int main(){
    vector< vector<int> > v(3, vector<int>(4,2)); // 3 rows and 4 columns, initialized to 0
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    cout << "Size of vector: " << v.size() << endl; // Number of rows
    cout << "Size of first row: " << v[0].size() << endl; // Number of columns in the first row
    cout<< v[1].size() << endl; // Number of columns in the second row
    return 0;

 }