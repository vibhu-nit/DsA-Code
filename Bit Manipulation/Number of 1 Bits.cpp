int count=0;
        while(N){
            int bit = N&1;
            if(bit) count++;
            N = N>>1;
        }return count;
    }
