#include <iostream  >

using namespace std;

// class Calculator {
//     public:
//         void add() {

//         }
// }

void findStatic() {
    static int a = 0;
}

int main() {
    cout << findStatic.a;
}
