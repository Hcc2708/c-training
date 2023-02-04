class Solution {
public:
    string convert(string s, int numRows) {
       
        if(s.size() < numRows) return s;
        else if(numRows == 1 ) return s;
         if(s.size() == 1) return s;
        string str = "";
        for(int i =0; i<numRows; i++)
        {
            str += s[i];
            if(i == 0 || i== numRows-1)
            {
                for(int j = i+2*numRows -2; j< s.size(); j += 2*numRows -2)
                {
                    str += s[j];
                }
            }
            else
            {
                int k = i+2*numRows -2; 
                for(int j = 2*numRows - 2*(i+1)+i; j < s.size(); j += 2*numRows - 2)
                {
                    str += s[j];
                    if(k < s.size())
                    {
                        str += s[k];
                        k += 2*numRows -2;
                    }
                }
            }
            
        }
        return str;
    }
};