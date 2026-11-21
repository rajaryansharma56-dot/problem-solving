
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int word_count = 1;

            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') {
                    word_count++;
                }
            }

            if (word_count > max_words) {
                max_words = word_count;
            }
        }

        return max_words;
    }
};
