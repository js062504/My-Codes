int l=0;
        int r=0;
        int maxlength=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                l++;
            }
            else{
                r++;
            }
            
            if(l==r){
                maxlength=max(maxlength,l+r);
            }
            else if(r>l){
                l=0;
                r=0;
            }
        }
        
        l=0;
        r=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='('){
                l++;
            }
            else{
                r++;
            }
            
            if(l==r){
                maxlength=max(maxlength,l+r);
            }
            else if(l>r){
                l=0;
                r=0;
            }
        }
        
        return maxlength;