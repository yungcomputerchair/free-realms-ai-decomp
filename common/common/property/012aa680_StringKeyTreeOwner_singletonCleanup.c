// addr: 0x012aa680
// name: StringKeyTreeOwner_singletonCleanup
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTreeOwner_singletonCleanup(void * instance) */

void __fastcall StringKeyTreeOwner_singletonCleanup(void *instance)

{
                    /* Singleton/global cleanup thunk for the string-key tree owner. It clears
                       global DAT_01cbd680, destroys the instance if non-null, then frees it. */
  DAT_01cbd680 = 0;
  if (instance != (void *)0x0) {
    StringKeyTreeOwner_dtor(instance);
                    /* WARNING: Subroutine does not return */
    _free(instance);
  }
  return;
}

