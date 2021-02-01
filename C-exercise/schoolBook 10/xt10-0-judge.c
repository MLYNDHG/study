int judgement(int n){
    extern num;
    int flag=1;
    for(int i=2;i<n;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}