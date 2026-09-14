class Solution {
public:
    string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int i=0;
        unordered_map<int, string> mp;
        mp[1000] = "M";
        mp[900] = "CM";
        mp[500] = "D";
        mp[400] = "CD";
        mp[100] = "C";
        mp[90] = "XC";
        mp[50] = "L";
        mp[40] = "XL";
        mp[10] = "X";
        mp[9] = "IX";
        mp[5] = "V";
        mp[4] = "IV";
        mp[1] = "I";
        string result="";
        while (i< 13)
        {
            if(num/values[i]>=1)
            {
                int count = num / values[i];
                for(int j = 0; j < count; j++)
                {
                    result += mp[values[i]];
                }
                num= num%values[i];
                i=i+1;
            }
            else
            {
                i=i+1;
            }
        }
        return result;
    }
};