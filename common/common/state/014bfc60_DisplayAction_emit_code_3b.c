// addr: 0x014bfc60
// name: DisplayAction_emit_code_3b
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_emit_code_3b(void * this) */

bool __fastcall DisplayAction_emit_code_3b(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and submits a display action (0x3b) using field +4. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9c0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x3b);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 4));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this_00);
  ExceptionList = local_c;
  return true;
}

