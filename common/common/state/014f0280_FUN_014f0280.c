// addr: 0x014f0280
// name: FUN_014f0280
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014f0280(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1c0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xee);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 4));
  DisplayActionBuilder_addVector28Arg(this,(void *)(param_1 + 8));
  DisplayActionBuilder_addVector28Arg(this,(void *)(param_1 + 0x18));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

