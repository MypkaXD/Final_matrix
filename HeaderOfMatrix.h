#ifndef HeaderOfMatrix_H
#define HeaderOfMatrix_H

void proverka(int x);
void fill_lines_and_columns(int* nRef);
void malloxMatrix(double**& matrix, int line, int column);
void fillMatrix(double** matrix, int line, int column);
void fillMatrixRand(double** matrix, int line, int column);
void fillOrRand(int* questions);
void multiplicationOfMatrix(double** matrix1, double** matrix2, double** matrix3, int line_first_matrix, int column_first_matrix, int column_second_matrix);
void printOfMatrix(double** matrix, int line_A, int column_B);
void deleteOfMatrix(double** matrix, int line, int column);

#endif