char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    for(int i=0;i<len;i++){
        char ch = S[i];
        st.push(ch);
    }
    char* ans = new char[len];
    int i=0;
    while(!st.empty()){
        ans[i] = st.top();
        st.pop();
        i++;
    }
    return ans;
}