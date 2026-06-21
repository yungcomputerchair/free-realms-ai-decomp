// addr: 0x014f4a30
// name: FUN_014f4a30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014f4a30(int param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b278b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  StatePacket_setStringAndPair
            (this,(void *)(param_1 + 4),*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24));
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xad);
  DisplayActionBuilder_addStringArg(this_00,(void *)(param_1 + 4));
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 0x20));
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 0x24));
  FUN_012d3550(this_00);
  ExceptionList = local_c;
  return 1;
}

