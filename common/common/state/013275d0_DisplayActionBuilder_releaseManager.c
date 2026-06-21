// addr: 0x013275d0
// name: DisplayActionBuilder_releaseManager
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_releaseManager(void * this) */

void __fastcall DisplayActionBuilder_releaseManager(void *this)

{
  int iVar1;
  
                    /* If field +4 is set, ensures the display-action manager, adds/releases through
                       FUN_012d3550, and clears the field. Exact ownership semantics are inferred.
                        */
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(iVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}

