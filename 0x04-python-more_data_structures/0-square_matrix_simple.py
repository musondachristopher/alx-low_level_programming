#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix1 = matrix.copy()

    for i in range(len(matrix)):
        new_matrix1[i] = list(map(lambda x: x**2, matrix[i]))

    return (new_matrix1)
