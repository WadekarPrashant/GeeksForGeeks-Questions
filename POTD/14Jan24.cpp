#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> repeatedRows(std::vector<std::vector<int>> &matrix, int M, int N)
    {
        std::vector<int> result;
        std::unordered_set<std::string> rowSet;

        for (int i = 0; i < M; ++i)
        {
            std::string rowHash;
            for (int j = 0; j < N; ++j)
            {
                rowHash += std::to_string(matrix[i][j]);
            }

            if (rowSet.count(rowHash) > 0)
            {
                result.push_back(i);
            }
            else
            {
                rowSet.insert(rowHash);
            }
        }

        return result;
    }
};
