// addr: 0x01430d30
// name: GameCommand_AcceptAdjournment_ctor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameCommand_AcceptAdjournment_ctor(undefined4 * param_1,
   undefined4 param_2_) */

undefined4 * __thiscall
GameCommand_AcceptAdjournment_ctor(void *this,undefined4 *param_1,undefined4 param_2_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence:
                       GameCommand_AcceptAdjournment::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_AcceptAdjournment::vftable;
  FUN_0141b3d0(param_1);
  ExceptionList = local_c;
  return this;
}

