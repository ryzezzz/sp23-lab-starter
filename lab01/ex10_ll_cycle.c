#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
	if (head == NULL || head->next == NULL) return 0;
	node *fast = head->next->next, *slow = head ->next;
	while (fast != slow)
	{
		if (!fast->next || !fast->next->next) return 0;
		fast = fast->next->next;
		slow = slow->next;
	}
	return 1;
}
