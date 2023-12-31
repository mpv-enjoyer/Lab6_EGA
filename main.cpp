#include "main.h"

//std::vector<int> method(int N, std::vector<std::vector<int>>& distance, int step, int start_from, bool enable_dumb_insert);

int main()
{
    std::vector<std::vector<int>> matrix5 = 
{{ 0, 24, 29, 19, 16 },
{ 24, 0, 32, 20, 12 },
{ 29, 32, 0, 43, 21 },
{ 19, 20, 43, 0, 23 },
{ 16, 12, 21, 23, 0 }};
    std::vector<std::vector<int>> matrix15 = 
{{ 0, 30, 26, 16, 54, 28, 49, 21, 43, 49, 33, 20, 47, 37, 30 },
{ 30, 0, 25, 24, 32, 53, 21, 45, 30, 35, 44, 14, 19, 21, 40 },
{ 26, 25, 0, 34, 31, 35, 45, 47, 17, 58, 19, 12, 31, 44, 52 },
{ 16, 24, 34, 0, 55, 44, 38, 22, 48, 33, 47, 23, 43, 23, 17 },
{ 54, 32, 31, 55, 0, 66, 40, 74, 15, 63, 46, 34, 17, 51, 72 },
{ 28, 53, 35, 44, 66, 0, 74, 39, 51, 78, 23, 39, 66, 65, 55 },
{ 49, 21, 45, 38, 40, 74, 0, 60, 45, 25, 65, 36, 23, 18, 47 },
{ 21, 45, 47, 22, 74, 39, 60, 0, 64, 50, 52, 40, 64, 43, 19 },
{ 43, 30, 17, 48, 15, 51, 45, 64, 0, 65, 30, 25, 24, 51, 66 },
{ 49, 35, 58, 33, 63, 78, 25, 50, 65, 0, 76, 46, 46, 14, 32 },
{ 33, 44, 19, 47, 46, 23, 65, 52, 30, 76, 0, 30, 50, 62, 63 },
{ 20, 14, 12, 23, 34, 39, 36, 40, 25, 46, 30, 0, 28, 32, 41 },
{ 47, 19, 31, 43, 17, 66, 23, 64, 24, 46, 50, 28, 0, 34, 59 },
{ 37, 21, 44, 23, 51, 65, 18, 43, 51, 14, 62, 32, 34, 0, 29 },
{ 30, 40, 52, 17, 72, 55, 47, 19, 66, 32, 63, 41, 59, 29, 0 }};
method(5, matrix5, 5, randomnumber(0, 4), true);
method(15, matrix15, 15, randomnumber(0, 14), true);
int done;
std::cin >> done;
}