// addr: 0x014aad60
// name: FUN_014aad60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014aad60(int param_1)

{
  void *archetypeVector;
  void *this;
  void *pvVar1;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5eab;
  local_c = ExceptionList;
  archetypeVector = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    TradeService_ensureSingleton();
    CollectionDB_registerArchetypesFromVector(this,pvVar1,archetypeVector);
    DisplayActionManager_ensureSingleton();
    pvVar1 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x8b);
    value_ = FUN_013d0f10();
    DisplayActionBuilder_addIntArg(pvVar1,value_);
    FUN_012d3550(pvVar1);
  }
  ExceptionList = local_c;
  return 1;
}

