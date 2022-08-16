/*
 * This is Os_DisableInterrupts.h, auto-generated for:
 *   Project: osNeeds
 *   Target:  VRTA
 *   Variant: MinGW
 *   Version: 3.0.45
 */
/*
 * Include this header in order to allow any configured interrupt to be
 * disabled or enabled
 */
#ifndef OS_DISABLEINTERRUPTS_H
#define OS_DISABLEINTERRUPTS_H

/* These macros can be used to disable and enable individual interrupts by
 * name or address [$Target 26] [$Target 27]
 */
#define Os_Disable_1() Os_VRTA_DisableInterrupt(1U)
#define Os_Disable_OsTickIsr() Os_Disable_1()
#define Os_Enable_1() Os_VRTA_EnableInterrupt(1U)
#define Os_Enable_OsTickIsr() Os_Enable_1()

/* These macros can be used to disable and enable in one call, all of the
 * configured individual interrupts that are defined as Os_Disable_x and
 * Os_Enable_x above
 * [$Target 28] [$Target 29]
*/
#define Os_DisableAllConfiguredInterrupts() Os_Disable_OsTickIsr()
#define Os_EnableAllConfiguredInterrupts() Os_Enable_OsTickIsr()
#endif /* OS_DISABLEINTERRUPTS_H */
