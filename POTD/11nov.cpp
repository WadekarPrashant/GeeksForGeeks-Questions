class Solution
{
    public:
    
    inline bool Contains(unordered_map<char, char>& myMap, const char key)
    {
        return myMap.find(key) != myMap.end();
    }
    
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        auto length1 = str1.size();
        auto length2 = str2.size();
        
        if (length1 != length2) return false;
        
        unordered_map<char, char> myMap;
        unordered_map<char, char> myMapReverse;

        for (int i = 0; i < length1; i++)
        {
            auto& char1 = str1[i];
            auto& char2 = str2[i];
            
            if (!Contains(myMap, char1) && !Contains(myMapReverse, char2))
            {
                myMap[char1] = char2;
                myMapReverse[char2] = char1;
                continue;
            }
            
            if (Contains(myMap, char1))
            {
                if (myMap[char1] != char2)
                {
                    return false;
                }
            }
            
            if (Contains(myMapReverse, char2))
            {
                if (myMapReverse[char2] != char1)
                {
                    return false;
                }
            }
            
        }
        
        return true;
        
    }
};
