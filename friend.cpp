#include <iostream>
using namespace std;

/* forwarding declare: Khai báo trước sử dụng sau */
class Pig;

class Chicken
{
private:
    int weightOfChicken;
    friend void sell(Chicken, Pig);

public:
    Chicken(int wei)
    {
        this->weightOfChicken = wei;
    }
    ~Chicken();
};

class Pig
{
private:
    int weightOfPig;
    friend void sell(Chicken, Pig);

public:
    Pig(int wei)
    {
        this->weightOfPig = wei;
    }
    ~Pig();
};

void sell(Chicken ch, Pig pi)
{
    if (ch.weightOfChicken > pi.weightOfPig)
        cout << "Sell Chicken: " << ch.weightOfChicken << " kg" << endl;
    else
        cout << "Sell Pig: " << pi.weightOfPig << " kg" << endl;
}

int main()
{
    
    return 0;
}