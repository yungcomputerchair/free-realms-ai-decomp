// addr: 0x014b5250
// name: FUN_014b5250
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014b5250(int param_1)

{
  void *this;
  void *pvVar1;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7d9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandPayloadSingleton_init();
  CommandPayload_setEnabled(this,true);
  CommandPayload_setField4(this,*(int *)(param_1 + 0xc));
  CommandPayload_setField8(this,*(int *)(param_1 + 0x10));
  CommandPayload_setFieldC(this,*(int *)(param_1 + 0x14));
  pvVar1 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xc2);
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 0xc));
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 0x10));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this_00);
  ExceptionList = local_c;
  return 1;
}

