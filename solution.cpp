#include <cstring>
#include <iostream>

using namespace std;

int main() {

    bool nonDescending = true;
    int arr[4] = {10,5,4,8};
    for (int i = 0; i < 5; i++) {
        if (arr[i] > arr[i+1]) {
            nonDescending = false;
            break;
        }
    }

    if (nonDescending) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }

    return 0;
}
