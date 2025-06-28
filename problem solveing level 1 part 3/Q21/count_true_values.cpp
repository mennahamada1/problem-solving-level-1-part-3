#include <iostream>
using namespace std;

// دالة لحساب عدد القيم true في مصفوفة من نوع bool
int counters() {
    // تعريف مصفوفة تحتوي على قيم true و false
    bool arr[8] = {true, false, true, true, false, true, false, false};

    // متغير لتخزين عدد المرات اللي فيها true
    int results = 0;

    // حلقة for تمر على كل عنصر في المصفوفة
    for (int i = 0; i < 8; i++) {
        // لو العنصر قيمته true نزود العداد بواحد
        if (arr[i] == true) {
            results += 1;
        }
    }

    // نرجع عدد الـ true
    return results;
}

int main() {
    // نستدعي الدالة ونخزن الناتج
    int results = counters();

    // نطبع عدد المرات اللي فيها true
    cout << "The number of values that are true = " << results << endl;

    return 0;
}
