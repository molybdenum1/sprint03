char *mx_strspy(char *dst, const char *src){
    int i = 0;
    while(src[i]){
        if(dst[i] ==  '\0')
            return dst;
        dst[i] = src[i];
        i++
    }
    //dst[i] = '\0';
    //return dst;
}