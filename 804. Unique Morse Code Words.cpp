//https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> Morse{{'a',".-"},
                                {'b',"-..."},
                                {'c',"-.-."},
                                {'d',"-.."},
                                {'e',"."},
                                {'f',"..-."},
                                {'g',"--."},
                                {'h',"...."},
                                {'i',".."},
                                {'j',".---"},
                                {'k', "-.-"},
                                {'l',".-.."},
                                {'m',"--"},
                                {'n',"-."},
                                {'o',"---"},
                                {'p',".--."},
                                {'q',"--.-"},
                                {'r',".-."},
                                {'s',"..."},
                                {'t',"-"},
                                {'u',"..-"},
                                {'v',"...-"},
                                {'w',".--"},
                                {'x',"-..-"},
                                {'y',"-.--"},
                                {'z',"--.."}};
        set<string> neus; 
        for (auto i: words) { 
            string neu;
            for (int j=0; j<i.length();++j) {
                neu += Morse[i[j]]; 
            }
            neus.insert(neu); 
        }
        return neus.size();
    }
};