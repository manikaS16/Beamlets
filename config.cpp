#include <vector>

using namespace std;

class Config{
    public:
        const vector<vector<int>> grid = {
        {0, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 1},
        {1, 1, 0, 0}
        };

        static const int smax = 4;
        
        static const double alpha = 0.0;

};