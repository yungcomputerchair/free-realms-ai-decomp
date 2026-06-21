// addr: 0x014a9d20
// name: DisplayAction_emit_code_2b
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_emit_code_2b(void * this) */

bool __fastcall DisplayAction_emit_code_2b(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and submits a display action (0x2b) using field +8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5afb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x2b);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 8));
  FUN_012d3550(this_00);
  ExceptionList = local_c;
  return true;
}

