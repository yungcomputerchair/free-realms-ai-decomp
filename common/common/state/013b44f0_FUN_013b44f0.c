// addr: 0x013b44f0
// name: FUN_013b44f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013b44f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687e0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xa6);
  iVar3 = FUN_012d0920();
  value_ = 0;
  if (iVar3 != 0) {
    value_ = FUN_01301f30();
  }
  DisplayActionBuilder_addIntArg(pvVar2,value_);
  DisplayActionBuilder_addStringArg(pvVar2,(void *)(param_1 + 8));
  DisplayActionBuilder_addStringArg(pvVar2,(void *)(param_1 + 0x24));
  DisplayActionBuilder_addStringArg(pvVar2,(void *)(param_1 + 0x78));
  DisplayActionBuilder_addBoolArg(pvVar2,*(bool *)(param_1 + 0x94));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return 1;
}

