## Aditya Agre
## TYCOA6
## Assignment Problem

## At each stage, we have too assign one person one job
## 1st step -> n options
## 2nd -> n-1* n
## 3rd n-2*n-1*n

def branch_n_bound(data_matrix, current, cost):
    next_person_index = len(current)

    temp = current

    combinations = []
    costs = []

    
    pending_jobs = []
    for job in range(n):
        if job not in current:
            pending_jobs.append(job)

   
    for job in pending_jobs:

        new_curr = []
        for old_job in current:
            new_curr.append(old_job)
        new_curr.append(job)
        #print(new_curr)

        new_cost = cost + data_matrix[next_person_index][job]
        #print(new_cost)

        new_curr, new_cost = branch_n_bound(data_matrix, new_curr, new_cost)

        combinations.append(new_curr)
        costs.append(new_cost)

    if(len(costs)):

        min_cost = min(costs)
        minpos = costs.index(min_cost)

        best_combination = combinations[minpos]

        return best_combination, min_cost

    else:
        return current, cost


print("Assignment Problem")
print("Enter number of jobs:")

n= int(input())

time_per_person = []

for person in range(n):
    person_time = []
    for job in range(n):
        print("Time taken by person_", person, "for job_", job," : ")
        time = int(input())
        person_time.append(time)
    print()

    time_per_person.append(person_time)


print(time_per_person)
print()

job_seq, min_cost  = branch_n_bound(time_per_person, [], 0)
 

print("Jobs per person:")

for person in range(n):
    print("Person", person, "does Job", job_seq[person])

##Output
##================ RESTART: C:/Users/Admin/Desktop/TYCOA6/oct23.py ===============
##Assignment Problem
##Enter number of jobs:
##3
##Time taken by person_ 0 for job_ 0  : 
##2
##Time taken by person_ 0 for job_ 1  : 
##6
##Time taken by person_ 0 for job_ 2  : 
##7
##
##Time taken by person_ 1 for job_ 0  : 
##4
##Time taken by person_ 1 for job_ 1  : 
##8
##Time taken by person_ 1 for job_ 2  : 
##3
##
##Time taken by person_ 2 for job_ 0  : 
##9
##Time taken by person_ 2 for job_ 1  : 
##5
##Time taken by person_ 2 for job_ 2  : 
##1
##
##[[2, 6, 7], [4, 8, 3], [9, 5, 1]]
##
##Jobs per person:
##Person 0 does Job 0
##Person 1 does Job 2
##Person 2 does Job 1



    



    
    
