#ifndef ET_INTEGRATION_SETUP_K_H
#define ET_INTEGRATION_SETUP_K_H

#include <AMReX_REAL.H> 
#include <AMReX_Array4.H> 

namespace Idx { 
         enum ETIndexes {PhiRe, NumScalars}; 
};

namespace InitIdx { 
     enum ETInitIndexes {Q6, NumScalars}; 
};

namespace Diag { 
         enum DiagnosticIndexes {NumScalars}; 
};

#define NUM_GHOST_CELLS 4

#endif