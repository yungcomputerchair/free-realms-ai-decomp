// addr: 0x01431210
// name: GameCommand_ConcedeGame_ctor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameCommand_ConcedeGame_ctor(undefined4 * param_1, undefined4
   param_2_) */

undefined4 * __thiscall
GameCommand_ConcedeGame_ctor(void *this,undefined4 *param_1,undefined4 param_2_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence:
                       GameCommand_ConcedeGame::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined ***)this = GameCommand_ConcedeGame::vftable;
  FUN_0141b3d0(param_1);
  ExceptionList = local_c;
  return this;
}

