// addr: 0x014b1fb0
// name: SynchronizationCommand_AddNonTradable_applyObjectKind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_AddNonTradable_applyObjectKind(void * this) */

void __fastcall SynchronizationCommand_AddNonTradable_applyObjectKind(void *this)

{
  void *unaff_ESI;
  
                    /* Sets object-kind mode 1 for the AddNonTradable synchronization command and
                       runs the shared collection/object update helper. */
  SynchronizationCommand_setObjectKind1(this,(void *)0x1,unaff_ESI);
  SynchronizationCommand_applyCollectionItemToggles(this);
  return;
}

