// addr: 0x012b81d0
// name: SingletonManager_destroyInstance
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SingletonManager_destroyInstance(void * instance) */

void __fastcall SingletonManager_destroyInstance(void *instance)

{
                    /* Clears the global singleton pointer and destroys/frees the instance if it is
                       non-null. */
  DAT_01cbd688 = 0;
  if (instance != (void *)0x0) {
    SingletonManager_dtor();
                    /* WARNING: Subroutine does not return */
    _free(instance);
  }
  return;
}

