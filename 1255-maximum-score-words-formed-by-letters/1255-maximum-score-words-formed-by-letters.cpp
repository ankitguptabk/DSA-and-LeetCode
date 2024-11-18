class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int letterCount[26] = {0};
        for (char letter : letters) {
            letterCount[letter - 'a']++;
        }
        int maxScore = 0;
        int numWords = words.size();
        vector<int> wordScores(numWords, 0);
        vector<vector<int>> wordCounts(numWords, vector<int>(26, 0));
        for (int i = 0; i < numWords; ++i) {
            for (char c : words[i]) {
                wordCounts[i][c - 'a']++;
                wordScores[i] += score[c - 'a'];
            }
        }
        function<void(int, int, int*)> dfs = [&](int idx, int currentScore, int* currentLetterCount) {
            if (idx == numWords) {
                maxScore = max(maxScore, currentScore);
                return;}
            dfs(idx + 1, currentScore, currentLetterCount);
            bool canUse = true;
            for (int j = 0; j < 26; ++j) {
                if (wordCounts[idx][j] > currentLetterCount[j]) {
                    canUse = false;
                    break;
                }
            }
            if (canUse) {
                for (int j = 0; j < 26; ++j) {
                    currentLetterCount[j] -= wordCounts[idx][j];
                }
                dfs(idx + 1, currentScore + wordScores[idx], currentLetterCount);
                for (int j = 0; j < 26; ++j) {
                    currentLetterCount[j] += wordCounts[idx][j];
                }
            }
        };
        dfs(0, 0, letterCount);
        return maxScore;
    }
};
