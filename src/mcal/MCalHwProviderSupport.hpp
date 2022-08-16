
/*******************************************************************************
 * Autogenerated by MCALgen V2.0.0.30631: MCalHwProviderSupport.hpp
 *******************************************************************************/
#ifndef MCALHWPROVIDERSUPPORT_HPP_
#define MCALHWPROVIDERSUPPORT_HPP_ 

/************************************************************************************************************
 *                         Provider Base Class
 ***********************************************************************************************************/
class MCAL_HwProvider {
public:
  // Default destructor just to make sure the destructor is virtual.
  virtual ~MCAL_HwProvider(void) {}

  virtual bool IsHardwareHere(uint32 HwId) = 0;
  virtual bool IsHardwarePresent(uint32 HwId) = 0;
};

#endif /* MCALHWPROVIDERSUPPORT_HPP_ */


