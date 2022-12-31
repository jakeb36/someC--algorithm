//n 个人围成一圈，从第一个人开始报数,数到 mm 的人出列，再由下一个人重新从 11 开始报数，数到 mm 的人再出圈，依次类推，直到所有的人都出圈，请输出依次出圈人的编号。
#include<iostream>
#include<cstdlib>
using namespace std;

struct list {
    int data;
    list* next;
};

list* creat_list_node(int element) {
    list* listpoint = (list*)malloc(sizeof(list));
    listpoint->data = element;
    listpoint->next = NULL;
    return listpoint;
}

void list_add_node(list* last, list* next)
{
    last->next = next;
}

void list_delete_node(list* this_node, list* prev_node)
{
    prev_node->next = this_node->next;
}

list* head;

int main()
{
    int n, m;
    cin >> n >> m;
    list one = { 1 ,NULL };
    list* end_node = &one;
    for (int i = 2; i <= n; i++)
    {
        list* last = end_node;
        list* next;
        next = creat_list_node(i);
        list_add_node(last, next);
        end_node = next;
    }
    end_node->next = &one;
    int x = 1;
    list* prev_node = end_node;
    list* this_node = &one;
    while (n)
    {
        if (x % m == 0 && x!=0)
        {
            cout << this_node->data << " ";
            list_delete_node(this_node, prev_node);
            x = 0;
            n--;
        }
        else
        {
            x++;
            prev_node = this_node;
            this_node = this_node->next;
        }
    }
    return 0;
}
