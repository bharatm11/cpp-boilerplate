/**
* MIT License
*
* Copyright (c) 2018 Bharat Mathur
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

/**
* @file class_B.hpp
* @author Bharat Mathur
* @date 30 November 2018
* @copyright 2018 Bharat Mathur
* @brief This file defines the methods for class "class_A". This is an example
* class to demonstrate class hierarchy and Google Mock.
*/
#ifndef CLASS_B_H_
#define CLASS_B_H_
#include "class_A.hpp"

class B : public A { //  B is derived from class base class, A
public:
  /**
  * @brief product calculates the product of two integer numbers from class A
  * @return void
  */
  void product();
};

#endif /* CLASS_B_H_ */
