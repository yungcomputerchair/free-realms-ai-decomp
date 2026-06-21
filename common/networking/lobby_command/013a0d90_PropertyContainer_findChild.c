// addr: 0x013a0d90
// name: PropertyContainer_findChild
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyContainer_findChild(void * param_1) */

void * __fastcall PropertyContainer_findChild(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Looks up a child/property entry in the tree rooted at offsets +0x58/+0x5c and
                       returns the payload pointer at node +0x10, or null if the iterator is at end.
                       Evidence: callers create or insert child objects when this lookup returns
                       null. */
  iVar1 = *(int *)((int)param_1 + 0x5c);
  piVar4 = (int *)FUN_013a0ab0(local_8,&stack0x00000004);
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  if ((iVar2 == 0) || (iVar2 != (int)param_1 + 0x58)) {
    FUN_00d83c2d();
  }
  if (iVar3 != iVar1) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    return *(void **)(iVar3 + 0x10);
  }
  return (void *)0x0;
}

