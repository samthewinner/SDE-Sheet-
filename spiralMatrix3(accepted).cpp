 vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int x = rStart;
        int y = cStart;        
        int d=0;int len = 0;
        // int count = 0;        
        vector<vector< int>>a;
        a.push_back({x,y});
        int dir[5] = {0,1,0,-1,0};
        while(a.size() <rows*cols){ 
            // cout<<a.size()<<endl;
            if(d==2 || d == 0 ) len++;
            for(int k=0;k<len;k++){
                x += dir[d];
                y += dir[d+1];
                if(x>=0 and x<rows and y>=0 and y<cols) {
                    a.push_back({x,y});
                }
            }
            d=(d+1)%4;
        }        
        return a;
    }
