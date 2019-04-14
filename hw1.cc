// Convert this program to C++

// change to C++ io

// change to one line comments

// change defines of constants to const

// change array to vector<>

// inline any short function


#include<iostream>
#include<vector>

const int  N = 40;

using namespace std;

template<class T>

// an generic fucntion to sum an array containing summable values 
inline void sum(T *p, int n, const vector<T> d){
    int i;
    *p = 0;
    for(i = 0; i < n; ++i)
    *p = *p + d[i];
}

int main(){
    
    int accum = 0;  //initial final sum variable
    
    vector<int> data(N); // initial a int vectors
    for(int i = 0; i < N; ++i){
        data[i] = i;
    }
    sum(&accum, N, data);
    
    cout<<"sum is "<<accum<<endl;
    return 0;
}