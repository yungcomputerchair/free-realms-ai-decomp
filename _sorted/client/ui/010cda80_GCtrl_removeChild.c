// addr: 0x010cda80
// name: GCtrl_removeChild
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GCtrl_removeChild(void * this, void * child) */

void __thiscall GCtrl_removeChild(void *this,void *child)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Clears the child's parent pointer, finds it in this object's child array, and
                       erases one entry when found. Class inferred from neighboring child-array
                       helpers and GCtrl UI context. */
  *(undefined4 *)((int)child + 4) = 0;
  iVar1 = *(int *)((int)this + 0x10);
  if (0 < iVar1) {
    iVar4 = 1;
    iVar3 = 0;
    while( true ) {
      iVar2 = *(int *)((int)this + 0x10);
      if (((iVar2 <= iVar3) && (iVar2 < iVar4)) && (iVar2 <= iVar4 + -1)) {
        if (*(int *)((int)this + 0x14) < iVar4) {
          FUN_00835f70(iVar4,0);
        }
        *(int *)((int)this + 0x10) = iVar4;
      }
      if (*(void **)(*(int *)((int)this + 0xc) + iVar3 * 4) == child) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    FUN_010cd4b0(iVar3,1);
  }
  return;
}

