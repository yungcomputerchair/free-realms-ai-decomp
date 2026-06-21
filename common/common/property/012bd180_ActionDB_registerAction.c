// addr: 0x012bd180
// name: ActionDB_registerAction
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_registerAction(void * action, int version) */

void __thiscall ActionDB_registerAction(void *this,void *action,int version)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int *extraout_EAX;
  int *piVar5;
  int *unaff_EDI;
  undefined1 *outPair;
  void **ppvVar6;
  undefined1 auStack_8 [8];
  
                    /* Registers a non-null Action pointer in ActionDB for a version, using the
                       action's string/key helper and inserting it only when the key is absent from
                       the version map. Evidence is the ActionDB.cpp 'action' and 'v != -1' asserts
                       followed by map lookup and slot assignment of the original action pointer. */
  iVar1 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x183);
  }
  pvVar2 = action;
  if (action == (void *)0x0) {
    FUN_012f5a60("action","..\\common\\common\\property\\ActionDB.cpp",0x185);
  }
  ActionDB_openStorageForVersion(this,iVar1);
  action = (void *)FUN_01321f20();
  iVar3 = ActionDB_ActionTree_findOrInsert(&version);
  iVar1 = *(int *)(iVar3 + 4);
  ppvVar6 = &action;
  outPair = auStack_8;
  pvVar4 = (void *)ActionDB_ActionTree_findOrInsert(&version);
  ActionDB_ActionTree_lowerBound(pvVar4,outPair,(int *)ppvVar6);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar3)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar1) {
    action = (void *)FUN_01321f20();
    ppvVar6 = &action;
    pvVar4 = (void *)ActionDB_ActionTree_findOrInsert(&version);
    piVar5 = ActionDB_findOrCreateActionSlot(pvVar4,ppvVar6,unaff_EDI);
    *piVar5 = (int)pvVar2;
  }
  return;
}

