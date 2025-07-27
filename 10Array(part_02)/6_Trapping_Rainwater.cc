#include <bits/stdc++.h>
using namespace std;

void trap(int *height, int n) {
    if (n <= 2) {
        cout << "Water trapped: 0" << endl;
        return;
    }

    int leftMax[200000], rightMax[200000];
    int waterTrapped = 0;

    // Step 1: Fill leftMax
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Step 2: Fill rightMax
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Step 3: Calculate water trapped
    for (int i = 0; i < n; i++) {
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];
    }

    cout << "Water trapped: " << waterTrapped << endl;
}

int main() {
    int height[7] = { 4 , 2 , 0 , 6, 3, 2 , 5 };
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
    return 0;
}
