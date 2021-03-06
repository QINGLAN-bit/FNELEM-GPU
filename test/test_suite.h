/**
FNELEM-GPU - TEST SUITE
Imports all tests.

@package test
@author ppizarror
@date 21/11/2018
@license
	MIT License
	Copyright (c) 2018 Pablo Pizarro R.

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

// Init header file
#ifndef FNELEM_GPU_TEST_FNELEM_SUITE_H
#define FNELEM_GPU_TEST_FNELEM_SUITE_H

#include "analysis/test_static_analysis.h"
#include "math/test_fematrix.h"
#include "math/test_fematrix_utils.h"
#include "model/base/test_model.h"
#include "model/base/test_model_component.h"
#include "model/elements/test_elements.h"
#include "model/elements/test_membrane.h"
#include "model/loads/test_load.h"
#include "model/loads/test_load_membrane_distributed.h"
#include "model/loads/test_load_node.h"
#include "model/loads/test_load_pattern.h"
#include "model/loads/test_load_pattern_constant.h"
#include "model/nodes/test_node.h"
#include "model/restraints/test_restraint_node.h"

/**
 * General test suite.
 */
void test_suite() {
    test_elements_suite();
    test_fematrix_suite();
    test_fematrix_utils_suite();
    test_load_membrane_distributed_suite();
    test_load_node_suite();
    test_load_pattern_constant_suite();
    test_load_pattern_suite();
    test_load_suite();
    test_membrane_suite();
    test_model_component_suite();
    test_model_suite();
    test_node_suite();
    test_restraint_node_suite();
    test_static_analysis_suite();
}

/**
 * Main test, checks differente between GPU/CPU.
 */
void test_analysis() {
    __test_building();
    __test_bridge();
}

#endif // FNELEM_GPU_TEST_FNELEM_SUITE_H