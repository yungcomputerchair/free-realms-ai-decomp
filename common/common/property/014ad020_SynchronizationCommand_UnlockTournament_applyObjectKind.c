// addr: 0x014ad020
// name: SynchronizationCommand_UnlockTournament_applyObjectKind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_UnlockTournament_applyObjectKind(void * this) */

void __cdecl SynchronizationCommand_UnlockTournament_applyObjectKind(void *this)

{
  void *in_ECX;
  void *unaff_ESI;
  
                    /* Sets object-kind mode 2 on the UnlockTournament synchronization command and
                       invokes the shared object/collection update walker. */
  SynchronizationCommand_setObjectKind2(in_ECX,(void *)0x2,unaff_ESI);
  SynchronizationCommand_applyCollectionItemToggles(in_ECX);
  return;
}

