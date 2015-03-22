/********************************************************************
 *
 * File                 : testTrinaryTree.c
 * Language             : C
 * Name                 : Shashank Tomar
 * Email                : shashanktomar86@gmail.com
 * 
 * Description          : This source file contains driver function
 *                        or test suite which further includes number
 *                        of test cases to test the Trinary Tree
 *                        insert and delete functionality
 *
 *******************************************************************/

#include "trinaryTree.h"


void test_1()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,1);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_2()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,2);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_3()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,2);
    head = deleteNode(head,2);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_4()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,3);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_5()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,4);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_6()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_7()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,7);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_8()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,9);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_9()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,13);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_10()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,13);
    head = deleteNode(head,13);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_11()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,14);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_12()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,15);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_13()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,16);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_14()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,18);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_15()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,5);
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_16()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    PNODE head1 = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head1 = insertNode(head1, 1);

    printInorder(head);
    printf ("\n");
    printInorder(head1);
    printf ("\n");
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
    head1 = destroyTree(head1);
}

void test_17()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 7);
    head = insertNode(head, 4);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_18()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 8);
    head = insertNode(head, 12);
    head = insertNode(head, 13);
    head = insertNode(head, 11);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,12);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_19()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,12);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_20()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,7);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,9);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,13);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,13);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,13);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,14);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,15);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,16);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,18);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,4);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,3);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,2);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,2);
    printInorder(head);
    printf ("\n");
    head = deleteNode(head,1);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_21()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);
    head = insertNode(head, 4);
    head = insertNode(head, 9);
    head = insertNode(head, 7);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 15);
    head = insertNode(head, 14);
    head = insertNode(head, 13);
    head = insertNode(head, 16);
    head = insertNode(head, 13);
    head = insertNode(head, 18);
    head = insertNode(head, 3);
    head = insertNode(head, 1);
    head = insertNode(head, 8);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,9);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}

void test_22()
{
    printf ("Func: %s\n", __FUNCTION__);
    PNODE head = NULL;
    head = insertNode(head, 5);

    printInorder(head);
    printf ("\n");
    head = deleteNode(head,5);
    printInorder(head);
    printf ("\n");

    head = destroyTree(head);
}


/********************************************************************
 * Function    : main()
 * Input       : void
 * Returns     : void
 * Description : Main function which acts as test suite to run the
                 test cases for Trinary Tree.
 ********************************************************************/
void main()
{
    printf ("Func: %s\n", __FUNCTION__);
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    test_8();
    test_9();
    test_10();
    test_11();
    test_12();
    test_13();
    test_14();
    test_15();
    test_16();
    test_17();
    test_18();
    test_19();
    test_20();
    test_21();
    test_22();

}
