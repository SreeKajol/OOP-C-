#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    double interestRate;
    double returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, double r);

    void display();
};
BankDeposit ::BankDeposit(int p, int y, double r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = p;
    for (int i = 1; i <= year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = r / 100.0;
    returnValue = p;
    for (int i = 1; i <= year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::display()
{
    cout << "After" << year << "year the value will be: " << returnValue << "\n";
}

int main()
{
    BankDeposit kajol, rony, sree;
    int p, y, r;
    double R;
    cin >> p >> y >> r;
    kajol = BankDeposit(p, y, r);
    kajol.display();

    cin >> p >> y >> R;

    rony = BankDeposit(p, y, R);
    rony.display();

    return 0;
}