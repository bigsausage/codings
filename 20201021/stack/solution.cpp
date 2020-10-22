class Solution{
public:
    bool isValid(string s){
        stack<char> sc;
        int s_size = s.size();
        for(int i=0;i<s_size;i++){
            if(s[i]=='{' or s[i]=='[' or s[i]=='('){
                sc.push(s[i]);
            }
            else{
                if(sc.size()==0) return false;
                char top = sc.top();
                sc.pop();
                if((top=='{' and s[i]!='}') or (top=='[' and s[i]!=']') or (top=='(' and s[i]!= ')')) return false;
            }
        }
        if(sc.size() >0) return false;
        return true;
    } 
};
