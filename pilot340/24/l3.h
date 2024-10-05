// 3 x 3
//
// +-+-+-+
// | | | |
// + + + +
// | |   |
// + + +-+
// |     |
// +-+-+-+

// There is a wall around the perimeter of the maze.
// l[i][j] is intepreted as follows:
// 0 - no right wall, no lower wall
// 1 - no right wall, lower wall
// 2 - right wall, no lower wall
// 3 - right wall, lower wall
vector<vector<int>> l3 =
    {
        { 2, 2, 2},
        { 2, 0, 3},
        { 1, 1, 3}
    };
vector<vector<bool>> p3 =
    {
        { 1, 0, 0},
        { 0, 0, 0},
        { 0, 0, 0}
    };
