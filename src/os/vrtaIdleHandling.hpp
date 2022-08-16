/*
 * This is vrtaIdleHandling.hpp, auto-generated for:
 *   Project: osNeeds
 *   Target:  VRTA
 *   Variant: MinGW
 *   Version: 3.0.45
 */
#ifndef VRTAIdleHandlingHPP
#define VRTAIdleHandlingHPP

// ---------------------------------------------------------------------------
// Idle subscribers must inherit from this
class vrtaIdleSubscriber {
public:
  vrtaIdleSubscriber *_next_subscriber;

  vrtaIdleSubscriber();
  virtual int Idle(unsigned core) = 0;

  static void Subscribe(vrtaIdleSubscriber *);
};


#endif /* VRTAIdleHandlingHPP */


