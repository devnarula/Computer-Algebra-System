#include "includes.h"
#include "display.h"
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
void display(node *root)
{
    if (root == NULL)
        return;
    if (root->left)
        display(root->left);
    // cout << root->val;
    if (root->right)
        display(root->right);
}