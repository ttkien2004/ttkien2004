int Change(char s){
        if(s == 'I') return 1;        
        else if(s == 'V') return 5;        
        else if(s == 'X') return 10;
        else if(s == 'L') return 50;
        else if(s == 'C') return 100;
        else if(s == 'D') return 500;
        else if(s == 'M') return 1000;
        return -1;
    }
int romanToInt(string s) {        
    int res = 0, op1 = 0, op2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(Change(s[i]) >= Change(s[i+1]) && i+1 < s.size()) res = res + Change(s[i]);
        else if (Change(s[i]) < Change(s[i+1]) && i+1 < s.size()) res = res - Change(s[i]);
        else res = res + Change(s[i]);
    }
return res;
}
