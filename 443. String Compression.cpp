class Solution {
public:
    int compress(vector<char>& chars) {
        
        int index = 0;
        int i = 0;
        
        int n = chars.size();
        
        while(i<n){
            char curr_char = chars[i];
            int char_count = 0;
            
            while(i<n && chars[i] == curr_char){
                char_count++;
                i++;
            }
            
            chars[index] = curr_char;
            index++;
            
            if(char_count > 1){
                string char_count_to_string = to_string(char_count);
                
                for(char &ch : char_count_to_string){
                    chars[index] = ch;
                    index++;
                }
            }
        }
        
        return index;
    }
}
