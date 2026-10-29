class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string s1 = "";
        string s2 = "";
        string sum = "";

        int i = 0;

        for (i = 0; i < word1.length(); i++) {
            sum += word1[i];

            if (i < word2.length()) {
                sum += word2[i];
            }
        }

        for (int j = i; j < word2.length(); j++) {
            sum += word2[j];
        }

        return sum;
    }
};