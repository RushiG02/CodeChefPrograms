n=int(input())
A=list(map(int,input().split()))
r=[]
def collectApple(ip1,ip2):
    s=[]
    k=1
    
    while(k<len(ip2)):
        i=k
        r=ip2[k-1]
        temp=r
        while(i<len(ip2)):
        
            if ip2[i]<ip2[i-1]:
                j=i-1
                r=0
            
                while(j>=0):
                    if ip2[j]>ip2[i]:
                        r+=ip2[i]
                        temp=ip2[i]
                    else:
                        continue
                    j-=1
                r+=ip2[i]
        
            else:
                r+=temp
            i+=1
        k+=1
        s.append(r)
    s.sort()
    return(s[-1])
print(collectApple(n,A))
