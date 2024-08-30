#include <stdlib.h>

#include "binary_search_tree.h"

node_t *build_tree(int *tree_data, size_t tree_data_len)
{
   if (tree_data_len == 0) {
      return NULL;
   }
   size_t index = 0;
   node_t *root = malloc(sizeof(node_t));
   root->data = tree_data[index];
   ++index;
   root->left = NULL;
   root->right = NULL;
   for (; index < tree_data_len; index++) {
      int value = tree_data[index];
   }
   return root;
}
void free_tree(node_t *tree)
{
}
int *sorted_data(node_t *tree)
{
}