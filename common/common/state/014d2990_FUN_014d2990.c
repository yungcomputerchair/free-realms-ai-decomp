// addr: 0x014d2990
// name: FUN_014d2990
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014d2990(int param_1)

{
  void *pvVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac63b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  IntObjectMap_deleteAndEraseEntry
            (*(undefined4 *)(param_1 + 8),DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  pvVar1 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    this = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x9d);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

