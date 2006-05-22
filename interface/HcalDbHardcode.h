//
// F.Ratnikov (UMd), Dec. 14, 2005
//
#ifndef HcalDbHardcodeIn_h
#define HcalDbHardcodeIn_h

#include "DataFormats/HcalDetId/interface/HcalDetId.h"
#include "CondFormats/HcalObjects/interface/HcalPedestal.h"
#include "CondFormats/HcalObjects/interface/HcalPedestalWidth.h"
#include "CondFormats/HcalObjects/interface/HcalGain.h"
#include "CondFormats/HcalObjects/interface/HcalGainWidth.h"
#include "CondFormats/HcalObjects/interface/HcalQIECoder.h"
#include "CondFormats/HcalObjects/interface/HcalQIEShape.h"
#include "CondFormats/HcalObjects/interface/HcalCalibrationQIECoder.h"

/**

   \class HcalDbHardcode
   \brief Hardcode implementation of some conditions data
   \author Fedor Ratnikov
   
*/
namespace HcalDbHardcode {
  HcalPedestal makePedestal (HcalDetId fId, bool fSmear = false);
  HcalPedestalWidth makePedestalWidth (HcalDetId fId);
  HcalGain makeGain (HcalDetId fId, bool fSmear = false);
  HcalGainWidth makeGainWidth (HcalDetId fId);
  HcalQIECoder makeQIECoder (HcalDetId fId);
  HcalCalibrationQIECoder makeCalibrationQIECoder (HcalDetId fId);
  HcalQIEShape makeQIEShape ();
}
#endif
