    int rowIndex = -1 ;
    int maxCount = 0 ;
    
    for(int i = 0 ; i < R ; i++){
        int count = 0 ;
        for(int j = 0 ; j < C ; j++ ){
            if(mat[i][j] == 1){
                count++ ;
            }
        }
        if(count > maxCount){
            maxCount = count ;
            rowIndex = i ;
        }
    }
    
    return rowIndex ;
