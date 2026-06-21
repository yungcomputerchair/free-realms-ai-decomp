// addr: 0x0133e060
// name: CWGame_ctor
// subsystem: common/rules/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * CWGame_ctor(undefined4 * param_1, undefined4 param_2_) */

undefined4 * __thiscall CWGame_ctor(void *this,undefined4 *param_1,undefined4 param_2_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: CWGame::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c0ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_ctor(this,param_1,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = CWGame::vftable;
  *(undefined ***)((int)this + 0x10) = CWGame::vftable;
  FUN_005258fb();
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  local_4._0_1_ = 3;
  FUN_005258fb();
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  local_4._0_1_ = 5;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_01247380();
  *(undefined1 *)((int)this + 0x3f5) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined1 *)((int)this + 0x3f4) = 0;
  *(undefined1 *)((int)this + 0x3f6) = 0;
  *(undefined1 *)((int)this + 0x38a) = 0;
  *(undefined1 *)((int)this + 0x408) = 0;
  ExceptionList = local_c;
  return this;
}

