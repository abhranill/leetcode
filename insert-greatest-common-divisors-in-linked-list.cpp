class Solution {
public:

    // Function to find GCD
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* current = head;

        while (current != NULL && current->next != NULL) {

            // Find GCD of current and next node
            int gcd = findGCD(current->val, current->next->val);

            // Create a new node with GCD value
            ListNode* newNode = new ListNode(gcd);

            // Insert new node between current and next
            newNode->next = current->next;
            current->next = newNode;

            // Move to the next ORIGINAL node
            current = newNode->next;
        }

        return head;
    }
};