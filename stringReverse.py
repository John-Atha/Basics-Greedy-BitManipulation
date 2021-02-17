def reverseWord(s):
    #your code here
    res = "";
    for c in s[::-1]:
        res=res+c;
    return res;