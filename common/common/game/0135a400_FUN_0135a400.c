// addr: 0x0135a400
// name: FUN_0135a400
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0135a400(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EBX;
  undefined1 local_8 [8];
  
                    /* Container unregister helper with weak evidence: optionally invokes a virtual
                       callback then removes this object from a global int-key tree if present. */
  if ((char)param_2 != '\0') {
    (**(code **)(*param_1 + 0x224))();
  }
  param_2 = param_1[5];
  StdTree_lowerBound_IntKey_pairOut(&DAT_01cbdbb8,local_8,&param_2,unaff_EBX);
  iVar3 = DAT_01cbdbbc;
  puVar1 = (undefined *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  if ((puVar1 == (undefined *)0x0) || (puVar1 != &DAT_01cbdbb8)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar2 + 0x10) == param_1) {
      FUN_01358270(local_8,puVar1,iVar2);
    }
  }
  return;
}

