class Solution {
public:
    int myAtoi(string s) {
        long long int x  = 0;
        if(s.size() != 0)
         while(s[0]== ' ')
            {
                
                s = s.substr(1);
                if(s.size() == 0) break;
            }
        bool flag = 0;
        if(s[0] == '-')
        {
            flag = 1;
            s = s.substr(1);
        }
        else if(s[0] == '+') s = s.substr(1);

        if(s.size() != 0)
         while(s[0]== '0')
            {
                
                s = s.substr(1);
                if(s.size() == 0) break;
            }
        if(s[0] < '0' || s[0] >'9') return 0;
        for(int i = 0; i<s.size(); i++)
        {
           if(s[i] < '0' || s[i] >'9') break;
            if((s[i] >= '0' && s[i] <= '9'))
            {
                x = x*10 + (s[i] - '0');
                if(flag == 0)
                {
                    if(x>INT_MAX) x = INT_MAX;
                }
                else 
                {
                    if(flag == 1) 
                    x = -x;
                    if(x < INT_MIN) x = INT_MIN;
                    x = (-1)*x;
                }

                
            }
        }
        cout<<s;
        if(flag == 1)
        {
            x = -x;
            if(x < INT_MIN) x = INT_MIN;
        }

        return x;
    }
};