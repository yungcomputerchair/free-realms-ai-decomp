// addr: 0x00f9cf10
// name: UI_UIService_getOrCreate
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined * __fastcall UI_UIService_getOrCreate(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Service registry accessor that returns the existing UIService or
                       constructs/registers one on miss. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a95b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_24 = &DAT_01cbd728;
  FUN_00f9bf20(&local_20,&local_24);
  iVar1 = *(int *)(param_1 + 8);
  if ((local_20 == (undefined *)0x0) || (local_20 != (undefined *)(param_1 + 4))) {
    FUN_00d83c2d(uVar2);
  }
  if (local_1c == (undefined *)iVar1) {
    local_24 = Mem_Alloc(100);
    puVar3 = (undefined *)0x0;
    local_4 = 0;
    if (local_24 != (undefined *)0x0) {
      puVar3 = (undefined *)UI_UIService_ctor();
    }
    local_4 = 0xffffffff;
    local_20 = &DAT_01cbd728;
    local_1c = puVar3;
    FUN_00f9ca00(local_18,&local_20);
    local_24 = puVar3;
    FUN_00f9cda0(&local_24);
    ExceptionList = local_c;
    return puVar3;
  }
  if (local_20 == (undefined *)0x0) {
    FUN_00d83c2d(uVar2);
  }
  if (local_1c == (undefined *)*(int *)(local_20 + 4)) {
    FUN_00d83c2d(uVar2);
  }
  ExceptionList = local_c;
  return (undefined *)*(undefined4 *)((int)local_1c + 0x10);
}

