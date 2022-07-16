 vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int i = rStart;
        int j = cStart;
        vector<vector<int>> a(rows,vector<int>(cols,0));
        int count = 1;
        int len=1;
        int dir = 0;int inc=0;
        int limit = rows*cols;
        while(count<=limit){                                        
            if(inc==2){
                inc = 0;
                len++;
            }
//             go right
            if(dir==0){
                for(int k=j;k<j+len;k++){
                    if(k<0 or k>=rows or k<0 or k>=cols) {                        
                        break;
                    }             
                    else{
                        a[i][k] = count;
                    count++;
                    }
                }
                j+=len;                
                
            }
//             go down
            else if(dir == 1){
                for(int k=i;k<i+len;k++){
                   if(k<0 or k>=rows or k<0 or k>=cols) {                        
                        break;
                    }                
                    else{
                        a[k][j] = count;
                    count++;
                    }
                }
                i+=len;
               
            }
//             go left
            else if(dir == 2) {
                for(int k = j;k>j-len;k--){
                    if(k<0 or k>=rows or k<0 or k>=cols) {                        
                        break;
                    }             
                    else{
                        a[i][k] = count;
                        count++;
                    }
                }
                j-=len;
            }
//             go right
            else if(dir == 3){
                for(int k=i;k>i-len;k--){
                    if(k<0 or k>=rows or k<0 or k>=cols) {                        
                        break;
                    }               
                    else{
                        a[k][j] = count;
                    count++;
                    }
                }
                i-=len;
            }
            inc++;
            dir = (dir+1)%4;
            
        }
        return a;
    }
