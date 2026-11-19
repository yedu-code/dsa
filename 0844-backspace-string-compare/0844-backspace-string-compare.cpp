class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char i: s){
            if(i == '#' && !st1.empty()){
                st1.pop();
            }else if(i != '#'){
                st1.push(i);
            }
        }
        for(char i: t){
            if(i == '#' && !st2.empty()){
                st2.pop();
            }else if(i!='#'){
                st2.push(i);
            }
        }

        string s1="";
        string t1="";
        while(!st1.empty()){
            s1 = s1+st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            t1 = t1+st2.top();
            st2.pop();
        }

        return s1==t1;

    }
};