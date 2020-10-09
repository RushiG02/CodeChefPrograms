from itertools import combinations
def sub_lists(list1): 
  
    # store all the sublists  
    sublist = [] 
    for i in range(list1):
        x=list(combinations([1,2,3],i))
        sublist=sublist+x
      
    return sublist 
def most_frequent(List): 
    return max(set(List), key = List.count) 
 
# driver code 
l1 = [1, 2, 3] 
x=sub_lists(l1)
n=3
re=[0*i for i in range(n)]
for i in x:
    i.sort()
    if len(i)<=2:
        if i[0]<n:
            re[i[0]-1]+=1
    else:
        if most_frequent(i)<n:
            re[most_frequent(i)-1]+=1
print(re)
