#include "includes.h"
#include "add.h"
using namespace std;
struct variable
{
    string val;
    int coeff;
    int deg;
};
struct node
{
    variable val;
    node *left;
    node *right;
};

node *add(node *l, node *r)
{
    cout << "add\n";
    display(l);
    cout << endl;
    display(r);
    cout << endl;
    if ((l->val).deg == 0 and (l->val).coeff == 0)
    {
        return r;
    }
    if ((r->val).deg == 0 and (r->val).coeff == 0)
    {
        return l;
    }
    if ((r->val).deg == 0 and (l->val).deg == 0)
    {

        cout << endl;
        node *n = new node;
        variable var = {to_string((r->val).coeff + (l->val).coeff), (r->val).coeff + (l->val).coeff, 0};
        n->val = var;
        n->left = NULL;
        n->right = NULL;
        return n;
    }
    if ((r->val).val == "x" and (l->val).val == "x" and (r->val).deg == (l->val).deg)
    {
        variable var = {"x", (r->val).coeff + (l->val).coeff, (r->val).deg};
        node *n = new node;
        n->val = var;
        n->left = NULL;
        n->right = NULL;
        return n;
    }
    variable var = {"+", -1, -1};
    node *n = new node;
    n->val = var;
    n->left = l;
    n->right = r;
    return n;
}