// addr: 0x012bdc40
// name: ActionDB_removeAction
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_removeAction(void * this, int actionId) */

void __thiscall ActionDB_removeAction(void *this,int actionId)

{
  int iVar1;
  void *pvVar2;
  int *extraout_EAX;
  undefined4 *puVar3;
  undefined4 *extraout_EAX_00;
  void *this_00;
  void *unaff_EDI;
  int in_stack_00000008;
  undefined1 *puVar4;
  int *piVar5;
  void *unused1;
  undefined1 auStack_10 [4];
  int iStack_c;
  undefined1 auStack_8 [8];
  
                    /* Removes an action id from the ActionDB index and destroys the loaded action
                       object if present. Evidence: ActionDB.cpp assert 'v != -1', lookup via the
                       action index, call to ActionDB_getAction-like 012bd4a0, then virtual
                       destructor on the returned object. */
  iVar1 = in_stack_00000008;
  if (in_stack_00000008 == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x1e0);
  }
  ActionDB_openStorageForVersion(this,iVar1);
  iVar1 = ActionDB_ActionTree_findOrInsert(&stack0x00000008);
  iStack_c = *(int *)(iVar1 + 4);
  piVar5 = &actionId;
  puVar4 = auStack_8;
  pvVar2 = (void *)ActionDB_ActionTree_findOrInsert(&stack0x00000008);
  ActionDB_ActionTree_lowerBound(pvVar2,puVar4,piVar5);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar1)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iStack_c) {
    puVar3 = (undefined4 *)ActionDB_getAction(actionId,in_stack_00000008);
    piVar5 = &actionId;
    puVar4 = auStack_8;
    pvVar2 = (void *)ActionDB_ActionTree_findOrInsert(&stack0x00000008);
    ActionDB_ActionTree_lowerBound(pvVar2,puVar4,piVar5);
    pvVar2 = (void *)extraout_EAX_00[1];
    unused1 = (void *)*extraout_EAX_00;
    puVar4 = auStack_10;
    this_00 = (void *)ActionDB_ActionTree_findOrInsert(&stack0x00000008);
    ActionDB_Tree_eraseNode(this_00,puVar4,unused1,pvVar2,unaff_EDI);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}

