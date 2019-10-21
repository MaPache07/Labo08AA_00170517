#include <iostream>
#include <string>

using namespace std;

void activity(int s[], int f[], int n){
    int temp = 0;
    cout << temp << ", ";
    for(int i = 1; i < n; i++){
        if(s[i] >= f[temp]){
            cout << i << ", ";
            temp = i;
        }
    }
    
}

int main(){
    int s[5] = {0,1,0,4,5};
    int f[5] = {1,3,6,4,5};
    activity(s, f, 5);
    return 0;
}
