// addr: 0x014b1040
// name: SynchronizationCommand_RemoveNonTradable_applyObjectKind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveNonTradable_applyObjectKind(void * this) */

void __fastcall SynchronizationCommand_RemoveNonTradable_applyObjectKind(void *this)

{
  void *unaff_ESI;
  
                    /* Sets object-kind mode 2 for the RemoveNonTradable synchronization command and
                       runs the shared collection/object update helper. */
  SynchronizationCommand_setObjectKind2(this,(void *)0x1,unaff_ESI);
  SynchronizationCommand_applyCollectionItemToggles(this);
  return;
}

