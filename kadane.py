def maxSubArraySum(a,size):
    max = a[0]
    pref=0
    curr=0
    for i in range(0, size):
        if pref<0:
            curr=a[i]
        else:
            curr=a[i]+pref
        pref=curr
        if curr>max:
            max=curr
    return max
