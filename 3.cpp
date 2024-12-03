#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // проинициализировали переменную result, в которой будет храниться максимум
    // проинициализировали переменную curr, в которой будут храниться входные числа
    int result, curr;

    cin >> curr;

    if (curr == 0) cout << "maximum = undefined" << endl;

    result = curr;
    // cout << "current maximum = " << result << endl;

    while (true)
    {
        cin >> curr;

        if (curr == 0)
        {
            break;
        }

        result = max(result, curr);
        // cout << "current maximum = " << result << endl;

    }

    cout << "maximum = " << result << endl;
}
