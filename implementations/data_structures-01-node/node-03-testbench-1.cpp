/* testbench-1.cpp
 * this testbench is used to test the functionalities of the class.
 * Date Created: 22 July, 2021
 *       Author: Akhilesh Kumar Verma
 */
#include <iostream>
#include "node-01-node.h"
int main(int argc, char **argv) {
	node n1 = node(1, NULL);
	node n2 = node(2, &n1);
	node n3 = node(3, n2.get_next());
	return 0;
}
