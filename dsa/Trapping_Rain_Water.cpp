#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = height.size();
    `
    vector<int> left(n), right(n);  
    int left_temp = 0, right_temp = 0;

  
    for (int i = 0; i < n; i++) {
        left_temp = max(left_temp, height[i]);
        left[i] = left_temp;
    }

  
    for (int i = n - 1; i >= 0; i--) {
        right_temp = max(right_temp, height[i]);
        right[i] = right_temp;  
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += min(left[i], right[i]) - height[i];
    }

    cout << "The water size that will be trapped is: " << sum << endl;

    return 0;
}
