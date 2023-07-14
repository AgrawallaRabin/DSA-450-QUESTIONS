//1. Reverse a String


//User function Template for C++

string reverseWord(string str)
{
    int st=0;
    int en = str.length()-1;
    while(st<en){
        swap(str[st],str[en]);
        st++;
        en--;
    }
    return str;
}