#include <bits/stdc++.h>
using namespace std;
/*
   pair

*/
void explainpair(){
    pair < int , int > p  = {1, 3};
    cout << p.first << " " << p.second ;

    pair < int ,pair < int , int >> p = {1, {2 , 3}}; 
    cout << p.first << " " << p.second.first  << " " << p.second.second << endl;

    pair <int , int > arr[] = { {1,2}, {3,4}, {5,6}};
    cout << arr[1].second;
}

int main (){

explainpair () ;

return 0;

}