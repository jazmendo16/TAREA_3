#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int datos[] = {10, 40, 100, 250};

    for (int i : datos) {
        cout << i << endl;
    }

    system("pause");
    return 0;
}

