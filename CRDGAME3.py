import math
t=int(input())
while(t):
    pc,pr=map(int,input().split())
    C,R=9,9
    rc,rr=0,0

    rc=math.ceil(pc/9)
    rr=math.ceil(pr/9)
    if rc<rr:
        print(0,rc)
    else:
        print(1,rr)

    t-=1
