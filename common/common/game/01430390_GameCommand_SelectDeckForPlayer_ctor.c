// addr: 0x01430390
// name: GameCommand_SelectDeckForPlayer_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_SelectDeckForPlayer_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameCommand_SelectDeckForPlayer, initializes its base command,
                       default string/storage fields, and deck/player payload slots. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016963e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  *param_1 = GameCommand_SelectDeckForPlayer::vftable;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_4 = 1;
  FUN_0141b3d0(param_2);
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}

