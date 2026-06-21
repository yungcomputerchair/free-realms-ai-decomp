// addr: 0x014ba050
// name: FUN_014ba050
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014ba050(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8bcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = param_1 + 0x20;
  DisplayActionManager_ensureSingleton();
  FUN_012d34d0(iVar3);
  iVar3 = param_1 + 0x14;
  DisplayActionManager_ensureSingleton();
  FUN_012d3490(iVar3);
  iVar3 = param_1 + 8;
  DisplayActionManager_ensureSingleton();
  FUN_012d3450(iVar3);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  DisplayActionManager_ensureSingleton();
  FUN_012d06a0(uVar2);
  param_1 = param_1 + 0x30;
  DisplayActionManager_ensureSingleton();
  FUN_012d3510(param_1);
  pvVar1 = Mem_Alloc(0x14);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xd3);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar2);
  ExceptionList = local_c;
  return 1;
}

