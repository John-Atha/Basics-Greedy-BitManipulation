def maximumMeetings(n,start,end):
    # we sort the meetings according to end time
    # from sooner to later end time
    d = []
    for i in range(0, n):
        d.append([start[i], end[i]])
    d.sort(key= lambda x: (x[1], x[0]))
    prevEnd=-1
    res=0
    for lec in d:
        if lec[0]>prevEnd:
            prevEnd = lec[1] 
            res=res+1
    return res
    

