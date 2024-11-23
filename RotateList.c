struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || k == 0) { 
        return head;
    }

    struct ListNode* t = head;
    struct ListNode* tt = NULL;
    struct ListNode* ttt = NULL;
    int n = 1;
    while (t->next != NULL) {
        t = t->next;
        n++;
    }
    tt = t; 
    k = k % n;
    if (k == 0) {
        return head; 
    }
    t = head; 
    for (int i = 1; i < n - k; i++) {
        t = t->next;
    }
    ttt = t->next; 
    t->next = NULL; 
    tt->next = head;
    head = ttt;

    return head;
}
