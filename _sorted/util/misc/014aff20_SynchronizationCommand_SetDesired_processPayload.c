// addr: 0x014aff20
// name: SynchronizationCommand_SetDesired_processPayload
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SynchronizationCommand_SetDesired_processPayload(void * this) */

bool __fastcall SynchronizationCommand_SetDesired_processPayload(void *this)

{
  void *this_00;
  
                    /* Processes or serializes the SetDesired synchronization-command payload by
                       invoking common synchronization-command handling and then operating on the
                       instances vector at +4. */
  SynchronizationService_ensureSingleton();
  CollectionContainer_applyItemQuantityPairs(this_00,(void *)((int)this + 4));
  return true;
}

