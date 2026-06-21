// addr: 0x014be270
// name: FUN_014be270
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014be270(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a97ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  iVar4 = param_1 + 0xc;
  DisplayActionManager_ensureSingleton();
  FUN_012d3ab0(iVar4);
  pvVar2 = Mem_Alloc(0x14);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xb4);
  FUN_012fa570(param_1 + 0xc);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar3);
  ExceptionList = local_c;
  return 1;
}

