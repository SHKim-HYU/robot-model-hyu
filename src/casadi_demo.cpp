/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010-2014 Joel Andersson, Joris Gillis, Moritz Diehl,
 *                            K.U. Leuven. All rights reserved.
 *    Copyright (C) 2011-2014 Greg Horn
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */


#include <iostream>
#include <fstream>
#include <ctime>
#include <casadi/casadi.hpp>

using namespace casadi;
using namespace std;

int main() {


  // Create a CasADi function loader object
  string path_indy7_M = "./robotshyu/robots/NRMK/indy7/indy7_M.casadi";
  string path_indy7_C = "./robotshyu/robots/NRMK/indy7/indy7_C.casadi";
  string path_indy7_G = "./robotshyu/robots/NRMK/indy7/indy7_G.casadi";
  
  Function M = Function::load(path_indy7_M);
  Function C = Function::load(path_indy7_C);
  Function G = Function::load(path_indy7_G);

  cout<<M<<endl<<C<<endl<<G<<endl;
  // Define input variables for the function
  DM q_val = DM::zeros(6,1);  // 6x1 dense matrix for q values
  DM tau = DM::zeros(6,1);
  cout<<q_val<<endl;
  
  // Call the function with the q input variable
  DM g = G(q_val)[0];
  DM m = M(q_val)[0];
  
  tau = G(q_val)[0];
  // Print the gravity torque output
  std::cout << "The gravity torque at q=[0,0,0,0,0,0] is: " << g << std::endl;

    return 0;
}
