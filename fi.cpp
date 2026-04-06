#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
        void pattern5(int N){
            for (int i = 0; i < N; i++){
                for (int j = N; j > i;j--){
                    cout << "*";
                }
                cout << endl;
            }
        }
};

int main (){
    solution sol;
    int N = 8;
    sol.pattern5(N);
    return 0;
}
