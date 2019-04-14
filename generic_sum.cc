#include<iostream>


template<typename T>
T sum(T* a, int n){
    T s = 0;
    for(int i = 0; i < n; i++){
        s += a[i];
    }
    return s;
}



int main(){
    using namespace std;
    int q[] = {1, 2, 3, 4, 5, 6, 7};
    double w[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    
    cout<<"Hello, World!"<<endl;
    cout<<"sum integer: "<<sum(q, 7)<<endl;
    cout<<"sum double: "<<sum(w, 6)<<endl;

    return 0;
}
