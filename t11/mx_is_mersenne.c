bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);
//M = 2^p - 1
bool mx_is_mersenne(int n){
    bool isMers;
    mersPrime = 0;
    if(mx_is_prime(n)){
        for(int naturalNum = 2; mersPrime <= n && !isMers; naturalNum++)
            mersPrime = ((int)mx_pow(2,n) - 1);
            isMers = (mersPrime == n);
    }
    if(isMers){
        return true;
    }else{
        return false;
    }
} 
