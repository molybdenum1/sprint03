bool mx_is_prime(int num){
    int flag = 0;
    
    for(int i = 2; i <= num / 2; i++){
        if(n % i == 0)
            flag = 1;
            break
    }
    if(flag == 1)
        return  true;
    else
        if(flag == 0)
            return true;
        else
            return false;
}
