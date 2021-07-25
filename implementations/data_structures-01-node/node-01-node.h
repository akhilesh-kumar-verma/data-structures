/* node.h
 * This header file declares a class node with one integer value and
 * one pointer to other node.
 * Date Created: 22 July, 2021
 *       Author: Akhilesh Kumar Verma
 */

// This is a forward declaration to define a type which is pointer to node
// This is just to make things more explicit and clear.
class node;
typedef node* nodeptr;
class node {
	int value;
	nodeptr next;
public:
	// constructors
	node(int value, nodeptr next);
	// getters
	int get_value();
	nodeptr get_next();
	// setters
	void set_value(int value);
	nodeptr set_next(nodeptr next);
};
