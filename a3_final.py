## Aditya Agre TYCOA6
## Floyd-Warsghall pairwise shortest path

def inp_graph():
    graph1 = []
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

    return graph1

given_graph = inp_graph()
#given_graph = [[0,3,100,7], [8,0,2,100], [5,100,0, 1], [2,100,100,0]]
# (I am using 100 to represent infinity)
print("Given graph")
print(given_graph)

print("\nShortest paths in all pairs by Floyd Warshall algorithm:")

def m2(given_graph):
    n = len(given_graph)
    for i in range(n):
        for j in range(n):
            for k in range(n):
                if j != i and k != i:
                    given_graph[j][k] = min({given_graph[j][k], given_graph[j][i] + given_graph[i][k]})

m2(given_graph)
print(given_graph)
