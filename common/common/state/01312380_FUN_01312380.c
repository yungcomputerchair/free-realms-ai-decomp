// addr: 0x01312380
// name: FUN_01312380
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01312380(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167751b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_20 = param_1;
  uVar3 = 0;
  local_1c = 0;
  FUN_01312050(&local_18,&local_20);
  if (local_18 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (local_14 == *(int *)(local_18 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  if (*(int *)(local_14 + 0x10) == 0) {
    pvVar2 = Mem_Alloc(0xc);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_012fa910();
    }
    local_4 = 0xffffffff;
    if (local_14 == *(int *)(local_18 + 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)(local_14 + 0x10) = uVar3;
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

