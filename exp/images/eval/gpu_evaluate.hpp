//| This file is a part of the sferes2 framework.
//| Copyright 2009, ISIR / Universite Pierre et Marie Curie (UPMC)
//| Main contributor(s): Jean-Baptiste Mouret, mouret@isir.fr
//|
//| This software is a computer program whose purpose is to facilitate
//| experiments in evolutionary computation and evolutionary robotics.
//|
//| This software is governed by the CeCILL license under French law
//| and abiding by the rules of distribution of free software.  You
//| can use, modify and/ or redistribute the software under the terms
//| of the CeCILL license as circulated by CEA, CNRS and INRIA at the
//| following URL "http://www.cecill.info".
//|
//| As a counterpart to the access to the source code and rights to
//| copy, modify and redistribute granted by the license, users are
//| provided only with a limited warranty and the software's author,
//| the holder of the economic rights, and the successive licensors
//| have only limited liability.
//|
//| In this respect, the user's attention is drawn to the risks
//| associated with loading, using, modifying and/or developing or
//| reproducing the software by the user in light of its specific
//| status of free software, that may mean that it is complicated to
//| manipulate, and that also therefore means that it is reserved for
//| developers and experienced professionals having in-depth computer
//| knowledge. Users are therefore encouraged to load and test the
//| software's suitability as regards their requirements in conditions
//| enabling the security of their systems and/or data to be ensured
//| and, more generally, to use and operate it in the same conditions
//| as regards security.
//|
//| The fact that you are presently reading this means that you have
//| had knowledge of the CeCILL license and that you accept its terms.


#ifndef EVAL_GPU_EVALUATE_HPP_
#define EVAL_GPU_EVALUATE_HPP_

#include <sferes/parallel.hpp>

// For the CUDA runtime routines (prefixed with "cuda_")
#include <cuda_runtime.h>
#include <cuda.h>
// #include "gpu_evaluate.cu"

//#ifndef BOOST_MPI_HAS_NOARG_INITIALIZATION
//#error MPI need arguments (we require a full MPI2 implementation)
//#endif

namespace sferes {

  namespace eval {
    SFERES_CLASS(GpuEvaluate) {
    public:
      GpuEvaluate() {
        
        //here we establish everything we need for copying CPPNs to the GPU
        //That means we launch certain values
        


      }

      template<typename Phen>
      void eval(std::vector<boost::shared_ptr<Phen> >& pop,
                size_t begin, size_t end) {
        
        //We will loop through and load the various CPPNs onto the GPU in batches -- k thx
       // Error code to check return values for CUDA calls
          cudaError_t err = cudaSuccess;

      }

      ~GpuEvaluate()
      {
       
      }

   

    protected:

    };

  }
}

#endif
