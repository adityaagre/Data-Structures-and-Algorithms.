def inp_graph():
    n = int(input("Please enter number of nodes: "))

    graph = []

    for i in range(n) :
        row = []
        for j in range(n) :
            string1 = "Enter distance from node" +str( i+1) + " to " + str(j+1)+ ": "
            row.append(int(input(string1)))
        graph.append(row)

    return graph

def next_vertex(vertices_covered,d):
    temp = []
    for i in range(len(d)):
        temp.append([d[i], i])

    temp.sort(key = lambda x : x[0])

    for x in temp:
        if(vertices_covered[x[1]] == False):
            return x[1]
        
    

def dijkstra(graph):
    n = len(graph)
    d = [100 for i in range(n)]
    d[0]=0                                  ## V imp
    current_node = 0
    vertices_covered = [0 for i in range(n)]
    ctr = n
    print(d)

    while(ctr):
      ##  print("Counter =  ", ctr, "   " , "Current = ", current_node)
        for x in range(n):
            ##print(x)
            ##print(d[current_node], graph[current_node][x], d[x])
            if(d[current_node] + graph[current_node][x] < d[x]):
                d[x] = d[current_node] + graph[current_node][x]
               ## print("Updating to ", d[x])

        print(d)
        vertices_covered[current_node] = 1
        current_node = next_vertex(vertices_covered,d)
        ctr -= 1

    return d
            

    

    
    
graph = [[0,50,45,10,100,100], [100,0,10,100,100,100], [100,100,0,100,30,100], [10,15,100,0,15,100], [100, 20,35,100,0,100], [100,100,100,100,3,0]]

##graph = inp_graph()
print(dijkstra(graph))
