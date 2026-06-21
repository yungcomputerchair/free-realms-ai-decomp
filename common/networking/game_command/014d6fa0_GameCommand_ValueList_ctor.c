// addr: 0x014d6fa0
// name: GameCommand_ValueList_ctor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameCommand_ValueList_ctor(undefined4 * param_1, undefined4
   param_2_) */

undefined4 * __thiscall
GameCommand_ValueList_ctor(void *this,undefined4 *param_1,undefined4 param_2_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: GameCommand_ValueList::vftable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad4d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_ValueList::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 1;
  FUN_0141b3d0(param_1);
  ExceptionList = local_c;
  return this;
}

