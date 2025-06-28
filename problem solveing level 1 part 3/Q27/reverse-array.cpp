#include <iostream>
#include <algorithm>
using namespace std;

// دالة لعكس عناصر المصفوفة وطباعتها
int numbers() {
    int nums[5] = {1, 2, 3, 4, 5};

    // عكس ترتيب العناصر
    reverse(nums, nums + 5);

    // طباعة العناصر بعد العكس
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

int main() {
    numbers();
    return 0;
}
