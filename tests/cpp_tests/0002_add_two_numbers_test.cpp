// 0002_add_two_numbers.cpp test file

#include <iostream>
#include <cassert>
#include "../../solutions/cpp/0002_add_two_numbers.cpp" 

// Helper function to create singly linked list from array
ListNode* createList(int array[], int size) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    for (int i = 0; i < size; i++) {
        current->next = new ListNode(array[i]);
        current = current->next;
    }
    return dummy->next;
}

// Helper function to compare two linked lists
bool compareLists(ListNode* l1, ListNode* l2) {
    while (l1 && l2) {
        if (l1->val != l2->val) return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    return l1 == nullptr && l2 == nullptr;
}

int main() {
    // Test case 1: 342 + 465 = 807
    int array11[] = {2, 4, 3};
    int array12[] = {5, 6, 4};
    int expected1[] = {7, 0, 8};

    ListNode* l11 = createList(array11, 3);
    ListNode* l12 = createList(array12, 3);
    ListNode* result1 = addTwoNumbers(l11, l12);
    ListNode* expectedList1 = createList(expected1, 3);

    assert(compareLists(result1, expectedList1));

    // Test case 2: 0 + 0 = 0
    int array21[] = {0};
    int array22[] = {0};
    int expected2[] = {0};

    ListNode* l21 = createList(array21, 1);
    ListNode* l22 = createList(array22, 1);
    ListNode* result2 = addTwoNumbers(l21, l22);
    ListNode* expectedList2 = createList(expected2, 1);
    
    assert(compareLists(result2, expectedList2));

    // Test case 3: 9999999 + 9999 = 10009998
    int array31[] = {9, 9, 9, 9, 9, 9, 9};
    int array32[] = {9, 9, 9, 9};
    int expected3[] = {8, 9, 9, 9, 0, 0, 0, 1};

    ListNode* l31 = createList(array31, 7);
    ListNode* l32 = createList(array32, 4);
    ListNode* result3 = addTwoNumbers(l31, l32);
    ListNode* expectedList3 = createList(expected3, 8);

    assert(compareLists(result3, expectedList3));



    std::cout<<"All tests cases passed!"<<std::endl;

    return 0;

}