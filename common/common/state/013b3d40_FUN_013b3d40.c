// addr: 0x013b3d40
// name: FUN_013b3d40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013b3d40(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687d16;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = (void *)0x0;
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0xf);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
    DisplayActionBuilder_addStringArg(this,(void *)(param_1 + 0x14));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x10));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 4));
    DisplayActionBuilder_addBoolArg(this,*(bool *)(param_1 + 0x30));
    value_ = *(int *)(param_1 + 0x34);
  }
  else {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(7);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
    DisplayActionBuilder_addStringArg(this,(void *)(param_1 + 0x14));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x10));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 4));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
    DisplayActionBuilder_addBoolArg(this,*(bool *)(param_1 + 0x30));
    value_ = *(int *)(param_1 + 0x34);
  }
  DisplayActionBuilder_addIntArg(this,value_);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

