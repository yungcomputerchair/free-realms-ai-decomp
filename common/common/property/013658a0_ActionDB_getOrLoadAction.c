// addr: 0x013658a0
// name: ActionDB_getOrLoadAction
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall ActionDB_getOrLoadAction(int param_1,int param_2)

{
  void *this;
  int iVar1;
  undefined4 *extraout_EAX;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 uVar4;
  undefined1 local_8 [8];
  
                    /* Checks ActionDB's action tree for an action id; if present returns the cached
                       slot value, otherwise ensures/loads the action through ActionDB_getAction.
                       Evidence is ActionDB_ActionTree_lowerBound, ActionDB_findOrCreateActionSlot,
                       and ActionDB_getAction callees. */
  this = (void *)(param_1 + 0x1f0);
  ActionDB_ActionTree_lowerBound(this,local_8,&param_2);
  iVar3 = extraout_EAX[1];
  iVar1 = *(int *)(param_1 + 500);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (iVar3 != iVar1) {
    piVar2 = ActionDB_findOrCreateActionSlot(this,&param_2,unaff_EDI);
    return *piVar2;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = param_2;
  ActionDB_ensureSingleton();
  iVar3 = ActionDB_getAction(iVar3,uVar4);
  return iVar3;
}

