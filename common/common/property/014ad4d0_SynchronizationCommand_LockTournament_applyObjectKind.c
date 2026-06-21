// addr: 0x014ad4d0
// name: SynchronizationCommand_LockTournament_applyObjectKind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_LockTournament_applyObjectKind(void * this) */

void __cdecl SynchronizationCommand_LockTournament_applyObjectKind(void *this)

{
  void *in_ECX;
  void *unaff_ESI;
  
                    /* Sets object-kind mode 1 on the LockTournament synchronization command and
                       invokes the shared object/collection update walker. */
  SynchronizationCommand_setObjectKind1(in_ECX,(void *)0x2,unaff_ESI);
  SynchronizationCommand_applyCollectionItemToggles(in_ECX);
  return;
}

