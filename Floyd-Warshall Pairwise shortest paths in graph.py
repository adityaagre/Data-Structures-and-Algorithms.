## Aditya Agre TYCOA6
## Floyd-Warsghall pairwise shortest path

def inp_graph():
    directed = bool(input("Is the graph directed? Enter 0 or 1"))

    graph1 = []

    if(directed):
        n = int(input("Enter number of nodes: "))
        edges_remaining = True
        print("Enter edges' details:")

        for ptr1 in range(n):
            local_list = []
            for ptr2 in range(n):
                
                print("Enter weight of edge from", ptr1, "to", ptr2, " :")
                wt = int(input())
                local_list.append(wt)
            graph1.append(local_list)

    ##    while(edges_remaining):
    ##        i = int(input("Enter node number of starting node of the edge"))
    ##        j = int(input("Enter node number of ending node of the edge"))
    ##        wt = int (input("Enter weight:"))
    ##        graph1[i][j] =   wt
    ##        edges_remaining = bool(input("Are there more edges?"))
    ##        

    ##print(graph1)
    return(graph1)

def dist(given_graph, i,j):
    return(given_graph[i][j])
    

def floyd_warshall(given_graph):
    A0 = given_graph
    Afinal =[]

    previous_mat = A0
    no_nodes = len(given_graph)

    for i in range(1,no_nodes+1):
        Ai = []
       # print("Matrix :", i)
       
        for j in range(no_nodes):
            row = []
            #print("Row index :", j)
            for col in range(no_nodes):
                #print("Col index :", col)
                previous_value = previous_mat[j][col]
                #print("Value fetched: ", previous_value)
                row.append(previous_value)
            Ai.append(row)
           # print("Row added", row)
        
        previous_mat = Ai

        ## For matrinx Ai, row i and column i must be kept same as  matrix ai-1
        ## for the other values:

        for row in range(no_nodes):
            for col in range(no_nodes):
                if(((row == i-1) or (col == i-1)) == False):
                   # print("Comparing rows and columns :", row,col)
                   # print("Cmp :", Ai[row][col], Ai[row][i-1] + Ai[i-1][col])
                    Ai[row][col] = min({Ai[row][col], Ai[row][i-1] + Ai[i-1][col]})
                  #  print("Choosing :",  Ai[row][col]) 

       # print(Ai)

        if(i == no_nodes):
            Afinal = Ai

    return (Afinal)

given_graph = inp_graph()
#given_graph = [[0,3,100,7], [8,0,2,100], [5,100,0, 1], [2,100,100,0]]
# (I am using 100 to represent infinity)
print("Given graph")
print(given_graph)

print("\nShortest paths in all pairs by Floyd Warshall algorithm:")

Pairwise_shortest_dist_matrix = floyd_warshall(given_graph)

for i in range(len(Pairwise_shortest_dist_matrix)):
    print("Dist from node ", i+1, "To nodes all the nodes is:", Pairwise_shortest_dist_matrix[i])







Output:
Is the graph directed? Enter 0 or 11
Enter number of nodes: 4
Enter edges' details:
Enter weight of edge from 0 to 0  :
0
Enter weight of edge from 0 to 1  :
3
Enter weight of edge from 0 to 2  :
100
Enter weight of edge from 0 to 3  :
7
Enter weight of edge from 1 to 0  :
8
Enter weight of edge from 1 to 1  :
0
Enter weight of edge from 1 to 2  :
2
Enter weight of edge from 1 to 3  :
100
Enter weight of edge from 2 to 0  :
5
Enter weight of edge from 2 to 1  :
100
Enter weight of edge from 2 to 2  :
0
Enter weight of edge from 2 to 3  :
1
Enter weight of edge from 3 to 0  :
2
Enter weight of edge from 3 to 1  :
100
Enter weight of edge from 3 to 2  :
100
Enter weight of edge from 3 to 3  :
0
Given graph
[[0, 3, 100, 7], [8, 0, 2, 100], [5, 100, 0, 1], [2, 100, 100, 0]]

Shortest paths in all pairs by Floyd Warshall algorithm:
Dist from node  1 To nodes all the nodes is: [0, 3, 5, 6]
Dist from node  2 To nodes all the nodes is: [5, 0, 2, 3]
Dist from node  3 To nodes all the nodes is: [3, 6, 0, 1]
Dist from node  4 To nodes all the nodes is: [2, 5, 7, 0]
