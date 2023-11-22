n = 8
board = [[-1 for i in range(n)] for i in range(n)]

def show():
    for row in board:
        print(row)

def tour_remaining():
    for i in range(n):
        for j in range(n):
            if board[i][j] == -1:
                return True
    return False

def next_pos(x, y):
    return [
        [x + 2, y - 1], [x + 2, y + 1], [x + 1, y - 2], [x + 1, y + 2],
        [x - 2, y - 1], [x - 2, y + 1], [x - 1, y - 2], [x - 1, y + 2]
    ]

def possible(a, b):
    return 0 <= a < n and 0 <= b < n and board[a][b] == -1

def initial():
    x = 0
    y = 0
    ctr = 0
    board[x][y] = ctr
    ctr += 1
    if recursive_placer(n, board, x, y, ctr):
        show()
    else:
        print("No Solution")

def number_of_moves_valid(pos):
    return len([_ for _ in next_pos(pos[0], pos[1]) if possible(_[0], _[1])])

def recursive_placer(n, board, x, y, ctr):
    if not tour_remaining():
        return True

    next_moves = next_pos(x, y)
    next_moves.sort(key=number_of_moves_valid)

    for next_pt in next_moves:
        xnew, ynew = next_pt
        if possible(xnew, ynew):
            board[xnew][ynew] = ctr
            if recursive_placer(n, board, xnew, ynew, ctr + 1):
                return True
            else:
                board[xnew][ynew] = -1
    return False

initial()
print("Done")
