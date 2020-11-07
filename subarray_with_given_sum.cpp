#include <iostream>
using namespace std;

int main() {
    int i;
    int A[i * 2];
    int B[500];
    int k = 0;
    int m = 0;
    int p;
    for(int j = 0; j < i; j++){
        cin >> A[k];
        k++;
        cin >> A[k];
        k++;
        for(int l = 0; l < A[(k - 2)]; l++){
            cin >> B[m];
            m++;
        }
    }
    for(int j = 0; j < (i*2); j += 2){
        int sum = 0;
        for(int l = 0; l < A[j]; l++){
            for(int o = (l + 1); o < (A[j] + 1); o++){
                int r = l;
                int s = o;
                if(j == 0){
                    r = r + 0;
                    s = s + 0;
                }else{
                    for(int t = j - 1; j >= 0; j++){
                        r = r + A[j - 1];
                        s = s + A[j - 1];
                    }
                }
                for(int q = r; q < s; q++){
                    sum += B[q];
                }
                if(sum == A[(l + 1)]){
                    if(j == 0){
                    }else{
                        for(int t = j - 1; j >= 0; j++){
                            r = r - A[j - 1];
                            s = s - A[j - 1];
                        }
                    }
                    cout << r + 1;
                    cout << s + 1;
                    p = 1;
                    break;
                }
            }
            if(p == 1){
                break;
            }
        }
    }
    
    
    
	return 0;
}
