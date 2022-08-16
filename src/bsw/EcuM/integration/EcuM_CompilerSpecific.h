/*
 * This is a template file. It defines integration functions necessary to complete RTA-BSW.
 * The integrator must complete the templates before deploying software containing functions defined in this file.
 * Once templates have been completed, the integrator should delete the #error line.
 * Note: The integrator is responsible for updates made to this file.
 *
 * To remove the following error define the macro NOT_READY_FOR_TESTING_OR_DEPLOYMENT with a compiler option (e.g. -D NOT_READY_FOR_TESTING_OR_DEPLOYMENT)
 * The removal of the error only allows the user to proceed with the building phase
 */
#ifndef NOT_READY_FOR_TESTING_OR_DEPLOYMENT
#error The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#else
//#warning The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#endif /* NOT_READY_FOR_TESTING_OR_DEPLOYMENT */


#ifndef ECUM_COMPILERSPECIFIC_H
#define ECUM_COMPILERSPECIFIC_H

/*The below macro 'NORETURN' defines the compiler attribute to declare a
function which would not return its control back to the caller.*/
/* The integrator could define this macro based on their compiler specific attribute
or may undefine this macro if not applicable.*/

#ifndef NORETURN
#define NORETURN __attribute__ ((__noreturn__))
#endif

#endif /* ECUM_COMPILERSPECIFIC_H*/


