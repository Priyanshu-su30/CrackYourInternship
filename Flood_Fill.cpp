class Solution {
public:
    void floodFillHelper(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != oldColor) {
            return;
        }

        image[sr][sc] = newColor;

        floodFillHelper(image, sr + 1, sc, newColor, oldColor); // Down
        floodFillHelper(image, sr - 1, sc, newColor, oldColor); // Up
        floodFillHelper(image, sr, sc + 1, newColor, oldColor); // Right
        floodFillHelper(image, sr, sc - 1, newColor, oldColor); // Left
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor != color) {
            floodFillHelper(image, sr, sc, color, oldColor);
        }
        return image;
    }
};
