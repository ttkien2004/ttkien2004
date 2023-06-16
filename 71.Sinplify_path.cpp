class Solution {
public:
    string simplifyPath(string path) {
        stack <string> S;
        string result;
        for(int i = 0; i < path.size(); i++){
            if(path[i] == '/') continue;
            string temp = "";
            while(i < path.size() && path[i] != '/'){
                temp += path[i];
                i++;
            }
            if(temp == "."){
                continue;
            }else if(temp == ".."){
                if(!S.empty()) S.pop();
            }else{
                S.push(temp);
            }
        }
        if(S.empty()) return "/";
        while(!S.empty()){
            result = "/" + S.top() + result;
            S.pop();
        }
        return result;
    }
};
