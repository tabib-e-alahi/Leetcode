class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int flag = 0;
        for(int i = 0; i <  arr.size(); i ++)
        {
        for(int j = 0; j < arr.size(); j++)
        {
            if(i != j && (arr[i] == 2 * arr[j]))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
        }

        if(flag == 1)
        {
        return true;
        }
        else{
        return false;
         }
    }
};

