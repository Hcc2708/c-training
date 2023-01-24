class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count1 = 0;
        for(int i = 0; i< words.size(); i++)
        {
            for(int j = i+1; j< words.size(); j++)
            {
                int size1 = words[i].size();
                int size2 = words[j].size();
                int x, y;
                if(size1 == size2)
                {
                    x = i;
                    y = j;
                }
                else
               {
                x = size1>size2? i : j;
                y = size1<size2? i : j;
               }
                int count2 = 0;
                
                for(int k = 0; k < words[x].size(); k++)
                {
                    
                    for(int l = 0; l< words[y].size(); l++)
                    {
                        if(words[y][l] == words[x][k])
                        {count2++;
                        break;}
                        
                    }
                    
                }
                
                if(count2 == words[x].size()) count1++;
                
            }
        }
        return count1;
    }
};