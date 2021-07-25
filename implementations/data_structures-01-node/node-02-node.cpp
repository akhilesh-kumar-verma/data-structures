/* node.cpp
 * This file contains the implementation for the methods declated in the
 * corresponding header file.
 * Date Created: 22 July, 2021
 *       Author: Akhilesh Kumar Verma
 */
#include"node-01-node.h"
node::node(int value, nodeptr next):
	value(value), next(next) {
	};
int node::get_value() {
	return value;
}
nodeptr node::get_next() {
	return next;
}
void node::set_value(int value) {
	this->value = value;
}
nodeptr node::set_next(nodeptr next) {
	return this->next = next;
}
