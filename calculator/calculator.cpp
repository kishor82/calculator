#include <iostream>

using namespace std;
class Calculator
{
  public:
    int Calculate(int, int, char);
};
int main()
{

    int x, y, result;
    char op;
    cout << "This My Calculator !" << endl;
    cout << "Please Enter num1 operator num2 " << endl;
    cin >> x >> op >> y;
    Calculator c;
    result = c.Calculate(x, y, op);
    cout << "Result is:" << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}

int Calculator::Calculate(int x, int y, char op)
{

    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0;
    }
}