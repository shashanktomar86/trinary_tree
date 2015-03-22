/********************************************************************
 *
 * File                 : trinaryTree.c
 * Language             : C
 * Name                 : Shashank Tomar
 * Email                : shashanktomar86@gmail.com
 * 
 * Description          : This source file contains implementation
 *                        for Trinary Tree functions.
 *
 *******************************************************************/


#include "trinaryTree.h"


/********************************************************************
 * Function    : newNode()
 * Input       : int
 * Returns     : PNODE - new node
 * Description : This function creates a new node with the given data
 ********************************************************************/
PNODE newNode(int data)
{
    PNODE node = (PNODE)malloc(sizeof(Node_T));

    if (node)
    {
        node->data = data;
        node->left = NULL;
        node->middle = NULL;
        node->right = NULL;
    }
    else
    {
        printf("malloc failure: %s : %d\n", __FUNCTION__, __LINE__);
    }

    return node;
}


/********************************************************************
 * Function    : insertNode()
 * Input       : PNODE, int
 * Returns     : PNODE - head node pointer
 * Description : This function inserts a new node in the tree
 ********************************************************************/
PNODE insertNode(PNODE head, int data)
{
    PNODE current = head;
    PNODE prev = NULL;

    if (data <= INT_MIN && data >= INT_MAX)
    {
        printf("*** INVALID INPUT ***\n");
        return NULL;
    }
    if (!head)
    {
        return newNode(data);
    }

    // tree traversal to find the insert position for new node
    while (current)
    {
        prev = current;

        if (data < current->data)
        {
            current = current->left;
        }
        else if (data == current->data)
        {
            current = current->middle;
        }
        else if (data > current->data)
        {
            current = current->right;
        }
    }

    // insert the node at proper link
    if (data < prev->data)
    {
        prev->left = newNode(data);
    }
    else if (data == prev->data)
    {
        prev->middle = newNode(data);
    }
    if (data > prev->data)
    {
        prev->right = newNode(data);
    }

    return head;
}


/********************************************************************
 * Function    : noChildNodeDelete()
 * Input       : PPNODE, PPNODE
 * Returns     : void
 * Description : This function delete a node which has no child
 ********************************************************************/
void noChildNodeDelete(PPNODE prev, PPNODE current)
{
    if (!prev || !current || !*prev || !*current)
    {
        printf("NULL EXCEPTION: %s : %d\n", __FUNCTION__, __LINE__);
        return;
    }
    // if node to be deleted is at left side of its parent
    if ((*prev)->left == *current)
    {
        (*prev)->left = NULL;
    }
    // if node to be deleted is at right side of its parent
    else if ((*prev)->right == *current)
    {
        (*prev)->right = NULL;
    }
    // if node to be deleted is at middle of its parent
    else if ((*prev)->middle == *current)
    {
        (*prev)->middle = NULL;
    }
    // if node to be deleted is head node
    else
    {
        *prev = NULL;
    }

    free (*current);
    *current = NULL;
}


/********************************************************************
 * Function    : oneChildNodeDelete()
 * Input       : PPNODE, PPNODE
 * Returns     : void
 * Description : This function delete a node which has only ONE child
 ********************************************************************/
void oneChildNodeDelete(PPNODE prev, PPNODE current)
{
    if (!prev || !current || !*prev || !*current)
    {
        printf("NULL EXCEPTION: %s : %d\n", __FUNCTION__, __LINE__);
        return;
    }
    // if node to be deleted is at left side of its parent
    if ((*prev)->left == *current)
    {
        (*prev)->left = ((*current)->left) ? (*current)->left : (*current)->right;
    }
    // if node to be deleted is at right side of its parent
    else if ((*prev)->right == *current)
    {
        (*prev)->right = ((*current)->left) ? (*current)->left : (*current)->right;
    }
    /* if node to be deleted is head node. Condition for middle link is not require,
       since middle node cannot have any child node */
    else
    {
        *prev = ((*current)->left) ? (*current)->left : (*current)->right;
    }

    free (*current);
    *current = NULL;
}

/********************************************************************
 * Function    : findReplacement()
 * Input       : PNODE, PPNODE
 * Returns     : PNODE
 * Description : This function finds a successor for a node that to 
 *               be deleted
 ********************************************************************/
PNODE findReplacement(PNODE successor, PPNODE successorParent)
{
    if (!successor || !successorParent)
    {
        printf("NULL EXCEPTION: %s : %d\n", __FUNCTION__, __LINE__);
        return;
    }
    /* traverse to the minimum node value of right sub tree of the
       corressponding node that need to be deleted */
    while (successor->left)
    {
        *successorParent = successor;
        successor = successor->left;
    }
        
    return successor;  
}


/********************************************************************
 * Function    : twoChildNodeDelete()
 * Input       : PPNODE, PPNODE
 * Returns     : void
 * Description : This function delete a node which has TWO child
 ********************************************************************/
void twoChildNodeDelete(PPNODE prev, PPNODE current)
{
    PNODE successor = NULL;
    PNODE successorParent = NULL;

    if (!prev || !current || !*prev || !*current)
    {
        printf("NULL EXCEPTION: %s : %d\n", __FUNCTION__, __LINE__);
        return;
    }
    // if node to be deleted is at left side of its parent
    if ((*prev)->left == *current)
    {
        /* find the replacement from the right subtree of the node to be deleted */
        successor = findReplacement((*current)->right, &successorParent);
        if (successorParent)
        {
            successorParent->left = (successor->right ? successor->right : NULL);
            (*prev)->left = successor;
            successor->right = (*current)->right;
            successor->left = (*current)->left;
        }
        else
        {
            successor->left = (*current)->left;
            (*prev)->left = successor;
        }
    }
    // if node to be deleted is at right side of its parent
    else if ((*prev)->right == *current)
    {
        successor = findReplacement((*current)->right, &successorParent);
        if (successorParent)
        {
            successorParent->left = (successor->right ? successor->right : NULL);
            (*prev)->right = successor;
            successor->right = (*current)->right;
            successor->left = (*current)->left;
        }
        else
        {
            successor->left = (*current)->left;
            (*prev)->right = successor;
        }
    }
    /* if node to be deleted is head node. Condition for middle link is not require,
       since middle node cannot have any child node */
    else
    {
        successor = findReplacement((*current)->right, &successorParent);
        if (successorParent)
        {
            successorParent->left = (successor->right ? successor->right : NULL);
            *prev = successor;
            successor->right = (*current)->right;
            successor->left = (*current)->left;
        }
        else
        {
            successor->left = (*current)->left;
            *prev = successor;
        }
    }

    free (*current);
    *current = NULL;

}


/********************************************************************
 * Function    : deleteNode()
 * Input       : PNODE, int
 * Returns     : PNODE
 * Description : This function delete a node with the given data
 ********************************************************************/
PNODE deleteNode(PNODE head, int data)
{
    PNODE current = head;
    PNODE prev = current;
    char isHeadNodeDelete = FALSE; // flag to check for the head node
    char isValidNode = FALSE;      // flag to check for the data in the tree

    do
    {
        if (!current)
        {
            printf("NULL EXCEPTION: %s : %d\n", __FUNCTION__, __LINE__);
            break;
        }
        while(current)
        {
            if (data < current->data)
            {
                prev = current;
                current = current->left;
            }
            else if (data > current->data)
            {
                prev = current;
                current = current->right;
            }
            else if (data == current->data)
            {
                if (current->middle)
                {
                    prev = current;
                    current = current->middle;
                }
                else
                {
                    isHeadNodeDelete = (prev == head) ? TRUE : FALSE;
                    isValidNode = TRUE;
                    break;
                }
            }
        }

        if (!isValidNode)
        {
            printf("*** INVALID NODE DATA ***\n");
            break;
        }
        if (!current->left && !current->right)
        {
            noChildNodeDelete(&prev, &current);
        }
        else if ((current->left && !current->right)
                || (!current->left && current->right))
        {
            oneChildNodeDelete(&prev, &current);
        }
        else
        {
            twoChildNodeDelete(&prev, &current);
        }

        if (isHeadNodeDelete)
        {
            head = prev;
        }

    } while (0);

    return head;
}


/********************************************************************
 * Function    : printInorder()
 * Input       : PNODE
 * Returns     : void
 * Description : This function provides Inorder display of trinary tree 
 ********************************************************************/
void printInorder(PNODE head)
{
    if (!head)
    {
        return;
    }
    else
    {
        printInorder(head->left);
        printf("%d  ",head->data);
        printInorder(head->middle);
        printInorder(head->right);
    }
}


/********************************************************************
 * Function    : destroyTree()
 * Input       : PNODE
 * Returns     : PNODE
 * Description : This function destroys the entire tree
 ********************************************************************/
PNODE destroyTree(PNODE head)
{
    if (head)
    {
        destroyTree(head->left);
        destroyTree(head->middle);
        destroyTree(head->right);
        free (head);
        head = NULL;
    }

    return head;
}


