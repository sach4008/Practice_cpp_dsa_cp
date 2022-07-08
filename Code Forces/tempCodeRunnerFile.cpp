auto it=mp.rbegin();it!=mp.rend();it++){
        int tmp = min(it->second,cnt);
        cnt -= tmp;
        it->second -= tmp;
        if(cnt == 0)
            break;
    }