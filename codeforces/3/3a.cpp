#include <iostream>
#define ABS(x) (x < 0 ? (-1 * x) : x);

int main()
{
    char x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    int dx = (int (x1 - x2));
    int dy = (int (y1 - y2));
    return 0; 
}
