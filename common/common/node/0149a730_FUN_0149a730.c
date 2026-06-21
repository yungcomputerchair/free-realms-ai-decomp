// addr: 0x0149a730
// name: FUN_0149a730
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0149a730(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  NodeKeyValueMap_find((void *)(param_1 + 4),local_8,(int *)&stack0x00000004);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)(param_1 + 8);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 4))) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    return 0;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)((int)pvVar1 + 4)) {
    FUN_00d83c2d();
  }
  return *(undefined4 *)(iVar2 + 0x10);
}

