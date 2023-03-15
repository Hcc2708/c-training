#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int, string> sample_map;
    sample_map.insert(pair<int, string>(-4, "abcd"));
    sample_map.insert(pair<int, string>(2, "abcde"));
    ///or
    ///map<int, string> sample_map { { 1, "one"}, { 2, "two" } };
    ///or
    ///
    cout<<sample_map[-4]<<" "<<sample_map[2];
    ///or
    ///cout << sample_map.at(1) << endl;
}
