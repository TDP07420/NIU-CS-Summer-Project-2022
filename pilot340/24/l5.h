// 5 x 5
//
// +-+-+-+-+-+
// | |   |   |
// + + +-+-+ +
// |       | |
// + +-+ + + +
// | |   | | |
// +-+ +-+-+ +
// |   |     |
// +-+ + +-+ +
// |     |   |
// +-+-+-+-+-+

// There is a wall around the perimeter of the maze.
// l[i][j] is intepreted as follows:
// 0 - no right wall, no lower wall
// 1 - no right wall, lower wall
// 2 - right wall, no lower wall
// 3 - right wall, lower wall
vector<vector<int>> l5 =
    {
        { 2, 0, 3, 1, 2},
        { 0, 1, 0, 2, 2},
        { 3, 0, 3, 3, 2},
        { 1, 2, 0, 1, 2},
        { 1, 1, 3, 1, 3}
    };
vector<vector<bool>> p5 =
    {
        { 1, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0}
    };
