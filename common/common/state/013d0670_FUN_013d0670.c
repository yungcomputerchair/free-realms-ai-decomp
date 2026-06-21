// addr: 0x013d0670
// name: FUN_013d0670
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013d0670(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ad8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  TradeService_ensureSingleton();
  FUN_012bf9d0(uVar3);
  pvVar2 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x8c);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

