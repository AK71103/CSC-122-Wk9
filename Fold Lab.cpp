// Fold lab
// Alexander kazantzis
// 10-20-26
//check my code
#include <iostream>
#include <functional>
#include <vector>
#include <cassert>
#include <stdexcept>

using namespace std;
template <typename T>
void print(T s){
    cout << s << endl;
}
int add(int x,int y){ //addition 
    return x+y;
}
int sub(int x,int y){ //subtraction
    return x-y;
}
int mult(int x,int y){ //multiplication
    return x*y;
}
void Tst_add(){
    assert(add(2,3)==5);
    assert(add(4,5)==9);

}
void Tst_sub(){
    assert(sub(3,3)==0);
    assert(sub(4,2)==2);
}

void Tst_mult(){
    assert(mult(3,5)==15);
    assert(mult(2,15)==30);
}
int fold(const vector<int>& v, function<int(int,int)> f){ //Sums up vector elements Ex)fold(f,v) returns (v[0],v[1],v[2],etc) fold(v,add) returns 15, fold(v,sub) returns 3, fold(v,mult) returns 120;
    if (v.empty()){
        throw invalid_argument("Fold needs vector with elements.");
    }
    int result = v[0];
    
    for (size_t i=1; i<v.size();++i){
        result = f(result,v[i]);
    }
    return result;
}


int main(){
    vector<int> v {1,2,3,4,5,}; //initailized vector.
    Tst_add();
    Tst_sub();
    Tst_mult();

    print(fold(v, add));  // 15
    print(fold(v, sub));  // -13
    print(fold(v, mult)); // 120

    return 0;
}
