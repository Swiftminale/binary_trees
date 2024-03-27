#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
  // Allocate memory for the new node
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  // Check for allocation failure
  if (new_node == NULL) {
    return NULL; // Indicate failure
  }

  // Set the node's value
  new_node->n = value;

  // Initially, set left and right children to NULL
  new_node->left = NULL;
  new_node->right = NULL;

  // Set the parent pointer (can be NULL for the root node)
  new_node->parent = parent;

  // Return the pointer to the newly created node
  return new_node;
}
