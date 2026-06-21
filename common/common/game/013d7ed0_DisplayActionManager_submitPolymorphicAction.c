// addr: 0x013d7ed0
// name: DisplayActionManager_submitPolymorphicAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall DisplayActionManager_submitPolymorphicAction(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If a polymorphic display-action holder is present, builds/registers a display
                       action through DisplayActionManager, initializes it, then destroys the
                       holder. Returns success when no action is pending. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bc8b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  ExceptionList = &local_c;
  pvVar3 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_012f9eb0(uVar2);
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (pvVar3 == (void *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    StdVector_destroyPolymorphicTriples(pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  if (iVar1 == 1) {
    uVar4 = 0x84;
  }
  else {
    if (iVar1 != 2) goto LAB_013d7f4f;
    uVar4 = 0x85;
  }
  FUN_012f8c70(uVar4);
LAB_013d7f4f:
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar3);
  ExceptionList = local_c;
  return 1;
}

