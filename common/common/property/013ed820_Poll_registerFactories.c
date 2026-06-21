// addr: 0x013ed820
// name: Poll_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Poll_registerFactories(void) */

void Poll_registerFactories(void)

{
                    /* Registers the Poll and PollChoice persistent component factories. It combines
                       the local Poll factory registration with the PollChoice registration wrapper.
                        */
  Poll_registerFactory();
  PollChoice_registerFactory();
  return;
}

