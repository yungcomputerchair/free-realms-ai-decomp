// addr: 0x01430850
// name: GameCommand_AcceptDraw_ctor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameCommand_AcceptDraw_ctor(undefined4 * param_1, undefined4
   param_2_) */

undefined4 * __thiscall
GameCommand_AcceptDraw_ctor(void *this,undefined4 *param_1,undefined4 param_2_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: GameCommand_AcceptDraw::vftable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_AcceptDraw::vftable;
  FUN_0141b3d0(param_1);
  ExceptionList = local_c;
  return this;
}

