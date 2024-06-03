# class NQueen:
#
#     def __init__(self, input_size: int):
#         print("Class Initialized")
#         self.input_size = input_size
#         self.__print_board(input_size)
#
#     def __print_board(self, input_size: int) -> None:
#         board = [[0 for i in range(input_size)] for i in range(input_size)]
#         for key in board:
#             print(key)
#
#     def __check_column(self, board, row: int, column: int) -> bool:
#         for i in range(row, -1, -1):
#             if board[i][column] == "Q":
#                 return False
#         return True
#
#     def __check_row(self, board, row: int, column: int) -> bool:
#         for i in range(column, -1, -1):
#             if board[row][i] == "Q":
#                 return False
#         return True
#
#     def __check_diagonal(self, board, row: int, column: int) -> bool:
#         for x,y in zip(range(row, -1, -1), range(column, -1, -1)):
#             if board[x][y] == "Q":
#                 return False
#         return True
#
#
# if __name__ == "__main__":
#     obj = NQueen(4)
