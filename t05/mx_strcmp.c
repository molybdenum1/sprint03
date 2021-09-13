int mx_strcmp(const char *s1, const char *s2 )
{
    int i, j = 0;
    while(*s1[i] == *s2[j])
    {
        if(&s1[i] == '\0' && *s2 == '\0')
            return 0;
        s1[i]++;
        s2[j]++;
    }
    return *s1 - *s2;
}
