// addr: 0x0142f400
// name: FUN_0142f400
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0142f400(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016960eb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d0920(uVar1);
  if (iVar2 != 0) {
    pvVar3 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x61);
    DisplayActionManager_ensureSingleton();
    FUN_012d0920();
    iVar2 = FUN_01301f30();
    DisplayActionBuilder_addIntArg(pvVar3,iVar2);
    DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 8));
    if (*(void **)(param_1 + 0xc) != (void *)0x0) {
      DisplayAction_addArgValueData(pvVar3,*(void **)(param_1 + 0xc));
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      DisplayAction_addArgValueData(pvVar3,*(void **)(param_1 + 0x10));
    }
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar3);
  }
  ExceptionList = local_c;
  return 1;
}

