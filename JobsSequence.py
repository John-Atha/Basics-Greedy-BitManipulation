import heapq
from heapq import heappop, heappush, heapify

class Job:
    def __init__(self, id=0, profit=0,deadline=0):
        self.profit = profit
        self.deadline = deadline
        self.id = id
    def __str__(self):
        return f'profit: {self.profit}, deadline: {self.deadline}'

def removeDupl(l):
    return list(dict.fromkeys(l))

def JobScheduling(Jobs,n):

    Jobs.sort(key= lambda job: job.deadline)
    maxJobs = Jobs[-1].deadline

    allowed=[]
    heapify(allowed)    
    
    limits=[]
    for j in Jobs:
        limits.append(j.deadline)
    limits=removeDupl(limits)
    limits.sort()
    limitIndex=-1
    #limit=Jobs[limitIndex].deadline
    limit=limits[limitIndex]
    profitSum=0
    done=0
    
    for job in Jobs[::-1]:
        if job.deadline>=limit:
            heappush(allowed, (-1)*job.profit)
        else:
            for i in range(0, limit-limits[limitIndex-1]):
                if (allowed):
                    tempProf = heappop(allowed)
                    done = done+1
                    # temp.profit has been multiplied by -1
                    profitSum = profitSum - tempProf
    
            limitIndex = limitIndex-1
            limit=limits[limitIndex]
            heappush(allowed, (-1)*job.profit)
    
    
    for i in range(0, limits[0]):
        if (allowed):
            tempProf = heappop(allowed)
            done = done+1
            # temp.profit has been multiplied by -1
            profitSum = profitSum - tempProf
            
    return [done, profitSum]

JobScheduling(Jobs,0)
