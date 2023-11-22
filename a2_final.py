class job:
    def __init__(self, name, profit, deadline):
        self.name=name
        self.profit=profit
        self.dl=deadline

    def show(self):
        print(self.name, ":\t", self.profit, "\t", self.dl)

print("Enter number of jobs:")
n=int(input())

jobs=[]

print("Enter Job details:")
for i in range(n):
    name="Job "+str(i+1)
    print(name)
    profit=int(input("Profit: "))
    deadline=int(input("Deadline: "))
    job_new = job(name,profit,deadline)
    jobs.append(job_new)
    print()

for jobss in jobs:
    jobss.show()


def sort():
    for i in range(n):
        for j in range(n-1):
            j1=jobs[j]
            j2=jobs[j+1]
            if(j1.profit<j2.profit):
                jobs[j]=j2
                jobs[j+1]=j1

sort()
print()
for jobss in jobs:
    jobss.show()

max_dl = jobs[0].dl
for jb in jobs:
    if(jb.dl>max_dl):
        max_dl = jb.dl
print(max_dl)
print()


ans = [None]*max_dl

def open():
    for i in range(max_dl):
        if(ans[i] == None):
            return True
            break
    else:
        return False

ptr=0

while(open()):
    d1 = jobs[ptr].dl
    print(jobs[ptr].name)
    while(d1>0):
        if(ans[d1-1] == None):
            ans[d1-1] = jobs[ptr]
            
            break
        d1 -= 1
    print(ans)
    ptr += 1
    if(ptr == n):
        break

print()
print("Final Answer")
for jj in ans:
    jj.show()

