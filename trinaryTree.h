/********************************************************************
 *
 * File                 : trinaryTree.h
 * Language             : C
 * Name                 : Shashank Tomar
 * Email                : shashanktomar86@gmail.com
 * 
 * Description          : This header file contains declaration of
 *                        Trinary Tree structure and its related 
 *                        functions which performs its operations.
 *
 *******************************************************************/


#ifndef TRINARY_TREE_H_
#define TRINARY_TREE_H_

#include <stdio.h>
#include <limits.h>
#include <malloc.h>


#define FALSE 0
#define TRUE 1

/* Trinary Tree Node structure */
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *middle;
    struct Node *right;
} Node_T;

typedef Node_T*  PNODE;
typedef Node_T** PPNODE;

/* Function declarations */
PNODE   newNode(int data);
PNODE   insertNode(PNODE head, int data);
void    noChildNodeDelete(PPNODE prev, PPNODE current);
void    oneChildNodeDelete(PPNODE prev, PPNODE current);
PNODE   findReplacement(PNODE successor, PPNODE successorParent);
void    twoChildNodeDelete(PPNODE prev, PPNODE current);
PNODE   deleteNode(PNODE head, int data);
void    printInorder(PNODE head);
PNODE   destroyTree(PNODE head);



#endif // TRINARY_TREE_H_
