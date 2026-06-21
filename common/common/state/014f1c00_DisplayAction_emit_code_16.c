// addr: 0x014f1c00
// name: DisplayAction_emit_code_16
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_emit_code_16(void * this) */

bool __cdecl DisplayAction_emit_code_16(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and submits a display action (0x16) using no explicit args. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b20bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x16);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar3);
  ExceptionList = local_c;
  return true;
}

