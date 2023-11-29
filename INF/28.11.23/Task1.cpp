#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Point
{
    double x = 0, y = 0, r = 0, a = 0;
};

int main()
{
    int N, M;
    string I;
    double L;
    cin >> N;
    for (int k = 0; k < N; k++)
    {
        cin >> M;
        L = 0;
        Point a, b;
        for (int j = 0; j < M; j++)
        {
            cin >> I;
            if (I == "P")
            {
                cin >> b.r >> b.a;
                b.x = b.r * cos(b.a * M_PI / 180);
                b.y = b.r * sin(b.a * M_PI / 180);
            }
            else
            {
                b.x = stoi(I);
                cin >> b.y;
            }
            if (j > 0)
                L += sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
            a = b;
        }
        cout << L << endl;
    }
}
