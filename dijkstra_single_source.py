import math

def inp_graph():
    directed = bool(input("Is the graph directed? Enter 0 or 1"))

    graph1 = []

    if(directed):
        n = int(input("Enter number of nodes: "))
        edges_remaining = True
        print("\nEnter edges' details:")
        print("IF No edge present between these nodes, enter 'inf'\n")

        for ptr1 in range(n):
            local_list = []
            for ptr2 in range(n):
                
                print("Enter weight of edge from", ptr1, "to", ptr2, " :")
                wt_str = input()
                if(wt_str == "inf"):
                    wt = math.inf
                else:
                    wt = int(wt_str)
                local_list.append(wt)
            graph1.append(local_list)

    return(graph1,n)


def Djikstra(graph, Number_of_nodes, source):
    graph1=graph
    ##Made a copy

    dist =[]
    ## List of distances, initially all infinity.
    for i in range(Number_of_nodes):
         dist.append(1000)
    dist[0]=0
    

    current = source
    Done=[]
    remaining=[]
    for i in range(Number_of_nodes):
        remaining.append(i)
    
    for i in range(Number_of_nodes):
        for destination in range(Number_of_nodes):
            print("at current, dest: ",current,destination)
            print(dist[current] ,graph1[current][destination], dist[destination])
            if(dist[current] + graph1[current][destination] < dist[destination]):
                
                dist[destination] = dist[current] + graph1[current][destination]

        Done.append(current)
        remaining.remove(current)
        if(len(remaining)==0):
            break
        check_list =[]
        for index in remaining:
            check_list.append(dist[index])
        min_dist = min(check_list)
        new_curr_ind = dist.index(min_dist)
            
        print(dist)
        current = new_curr_ind

    print(dist)


g1,n = given_graph = [[0,2,4,100,100,100], [100,0,1,7,100,100],[100,100,0,100,3,100],[100,100,100,0,100,1],[100,100,100,100,0,5],[100,100,100,100,100,0]], 6
Djikstra(g1,n,0)

        
        
        

    
