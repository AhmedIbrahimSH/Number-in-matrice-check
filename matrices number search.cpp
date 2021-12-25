#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int N, M, X, i, k;
    bool y = false;
    cout << "enter the number of rows and number of columns and the number that you want to search for " <<endl;
    cin >> N >> M >> X;
    int A[N][M];

    cout << " enter the values of the array please " << "\n";
    for (i = 0; i < N; i++){
        for(k = 0; k < M; k++){
            cin >> A[i][k];
        }
    }

     cout<< X <<endl;
     for (i = 0; i < N; i++){
        for(k = 0; k < M; k++){
                if(X == A[i][k]){
                    cout << "will not take number";
                    y = true;
                    break;
                }

     }}
     if(y != true){
        cout<<"will take number"<<endl;
     }

    return 0;

}
