/*
 * This file contains code from "C++ Primer, Fourth Edition", by Stanley B.
 * Lippman, Jose Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2005 by Objectwrite, Inc., Jose Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Contracts Department
 * 	75 Arlington Street, Suite 300
 * 	Boston, MA 02216
 * 	Fax: (617) 848-7047
*/ 

#include <cstring>
#include <cstddef>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <utility>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <iterator>

using std::vector; using std::list; using std::map; using std::set;  
using std::pair; using std::string; 
using std::istream; using std::ostream; using 
std::ifstream; using std::ofstream; using std::fstream;
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream_iterator; using std::ostream_iterator;
using std::find;  using std::sort; using std::for_each;
using std::count; using std::count_if; using std::copy;
using std::back_inserter; using std::reverse_iterator;
using std::strcmp;

std::ifstream& open_file(std::ifstream&, const std::string);
