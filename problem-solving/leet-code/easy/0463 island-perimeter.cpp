class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int land = 0, neighbour = 0, lSize = grid.size();

        for(int i = 0; i < lSize; i++) {
            int cSize = grid[i].size();

            for(int j = 0; j < cSize; j++) {
                    if(grid[i][j]==1) {
                        land++;

                        if(i!=0 && grid[i-1][j] == 1) {
                            neighbour++;
                        }

                        if(j!=0 && grid[i][j-1] == 1) {
                            neighbour++;
                        }
                    }
                }
        }

        return land * 4 - neighbour * 2;
    }
};