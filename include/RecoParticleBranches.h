#ifndef RecoParticleBranches_h
#define RecoParticleBranches_h 1

#include "LCTupleConf.h" 

#include "CWBranchesSet.h"


class TTree ;

namespace EVENT{
  class LCCollection ;
  class LCCEvent ;
}

/** RecoParticleBranches holds branches created from a ReconstructedParticle collection
 * 
 * @author F. Gaede, DESY
 * @version $Id:$
 */

class RecoParticleBranches : public CWBranchesSet {
  
public:
  
  RecoParticleBranches() {} ;
  
  virtual void initBranches( TTree* tree, const std::string& prefix="" ) ; //const char*  prefix=0) ;
  
  virtual void fill(const EVENT::LCCollection* col, EVENT::LCEvent* evt ) ;
  
  virtual ~RecoParticleBranches() {} ;
  

private:
  
  int    _nrc ;
  int    _rctyp[ LCT_RECOPARTICLE_MAX ] ;
  float  _rccov[ LCT_RECOPARTICLE_MAX ][10] ;
  float  _rcrpx[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcrpy[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcrpz[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcgpi[ LCT_RECOPARTICLE_MAX ] ;
  int    _rcpiu[ LCT_RECOPARTICLE_MAX ] ;
  int    _rcnpi[ LCT_RECOPARTICLE_MAX ] ;
  int    _rcfpi[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcmox[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcmoy[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcmoz[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcmas[ LCT_RECOPARTICLE_MAX ] ;
  float  _rcene[ LCT_RECOPARTICLE_MAX ] ;
  float  _rccha[ LCT_RECOPARTICLE_MAX ] ;

  
  // EVENT::ParticleIDVec _pid ;
  // EVENT::ReconstructedParticleVec _particles ;
  // EVENT::ClusterVec _clusters ;
  // EVENT::TrackVec _tracks ;
  
  
} ;

#endif



