/*
Problem : https://www.hackerrank.com/contests/amazon-arrays/challenges/largest-possible-number
Author : Basavaraj Kirunge
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(const string &a, const string &b){
    return ((a + b).compare(b + a) > 0)? true:false;
}
void findlarge(vector<int> &v){
    vector<string> svec;
    for(vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr) {
        svec.push_back(to_string(*itr));
    }
    sort(svec.begin(), svec.end(), comp);
    for(vector<string>::iterator itr = svec.begin(); itr != svec.end(); ++itr){
        cout << *itr ;
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    vector<int> v;
    for(int i = 0; i<N; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    findlarge(v);    
    return 0;
}

