
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<int> A = (11,2,3,14);
    cout << A[1] << endl;
    sort(A.begin().A.end());
    bool present = binery_search(A.begin), A.end(), 3;
    bool present = binery_search(A.begin), A.end(), 4;
    A.push_back(100);
     present = binery_search(A.begin), A.end(), 100;
     A.push_back(100);
     A.push_back(100);
     A.push_back(100);
     A.push_back(100);
     A.push_back(123); 

     vector<int>::iterator it = lower_bound(A.begin(), A.end(),100);
     vector<int>::iterator it2 = lower_bound(A.begin(), A.end(),100);
     cout << *it << " " *it2 << endl;
     cout << it2 - it << endl;
    


}