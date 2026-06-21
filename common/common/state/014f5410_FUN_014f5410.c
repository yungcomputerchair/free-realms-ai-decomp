// addr: 0x014f5410
// name: FUN_014f5410
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014f5410(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b298b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_012f8c70(9);
    DisplayActionBuilder_addStringArg(pvVar2,(void *)(param_1 + 4));
  }
  else {
    FUN_012f8c70(0x56);
    DisplayActionBuilder_addIntArg(pvVar2,*(int *)(param_1 + 0x20));
  }
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return 1;
}

