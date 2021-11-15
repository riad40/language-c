int main(){
  
    int n;
    int t;
    int s;
    
    printf("tapez les deux nombre n et t :\n");
    scanf("%d %d", &n,&t);
    if( n == t)
    { 
    s = 3 * (n + t);
    printf("alors la sommes est = %d\n", s);
    }
    else
    {
    s =  n + t ;
    printf("alors la sommes est = %d\n", s);    
    }
    
    return 0;
}
