// addr: 0x014cdc10
// name: FUN_014cdc10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014cdc10(int param_1)

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
  puStack_8 = &LAB_016ab9e6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = (void *)0x0;
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x40);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
    DisplayActionBuilder_addStringArg(this,(void *)(param_1 + 0xc));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x28));
    pvVar2 = (void *)(param_1 + 0x2c);
  }
  else {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x43);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
    pvVar2 = (void *)(param_1 + 0xc);
  }
  DisplayActionBuilder_addStringArg(this,pvVar2);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

