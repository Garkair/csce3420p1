#include <iostream>

using namespace std

int main()
{
    int mode;
    int firstNum = 0;
    int secondNum = 0;
    int result = 0;

    cout << "Enter Operation Mode: (1 | + , 2 | - , 3 | * , 4 | /)" << endl;
    cin >> mode;
    switch(mode)
    {
        case 1:
        cout << "Enter First Number" << endl;
        cin >> firstNum;
        cout << "Enter Second Number" << endl;
        cin >> secondNum;
        result = firstNum + secondNum;
        cout << "Result is: " << result << ". " << endl;
        break;
        case 2:
        cout << "Enter First Number" << endl;
        cin >> firstNum;
        cout << "Enter Second Number" << endl;
        cin >> secondNum;
        result = firstNum - secondNum;
        cout << "Result is: " << result << ". " << endl;
        break;
        case 3:
        cout << "Enter First Number" << endl;
        cin >> firstNum;
        cout << "Enter Second Number" << endl;
        cin >> secondNum;
        result = firstNum * secondNum;
        cout << "Result is: " << result << ". " << endl;
        break;
        case 4:
        cout << "Enter First Number" << endl;
        cin >> firstNum;
        cout << "Enter Second Number" << endl;
        cin >> secondNum;
        result = firstNum / secondNum;
        cout << "Result is: " << result << ". " << endl;
        break;
        default:
        cout << "Invalid input! Try again!" << endl;
        return 1;
    }

    return 0;
}