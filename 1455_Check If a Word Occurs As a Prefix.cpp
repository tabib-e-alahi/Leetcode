class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int index = 1;
        while(ss >> word){
            bool isprefix = true;
            if(word.size() >= searchWord.size())
            {
                for(int i = 0; i < searchWord.size(); i++)
                {
                    if(word[i] != searchWord[i]){
                        isprefix = false;
                        break;
                    }
                }
                if(isprefix){
                    return index;
                    }
            }
           index++;
        }

        return -1;
    }
};
