// addr: 0x00705580
// name: GSemaphore_defaultConstructorClosure
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GSemaphore_defaultConstructorClosure(void * this) */

void __thiscall GSemaphore::GSemaphore_defaultConstructorClosure(GSemaphore *this)

{
                    /* Default-constructor closure for GSemaphore that forwards to the GSemaphore
                       constructor with an initial count of 1. The decompiler comment explicitly
                       names GSemaphore::`default constructor closure'. */
  GSemaphore_ctor(this,1);
  return;
}

