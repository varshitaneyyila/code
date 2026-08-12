void reverseString(char* s, int sSize) {
    int n=sSize;
    int left=0;
    int right=n-1;
    while(left<right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;

    }

}