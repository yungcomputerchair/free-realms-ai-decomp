// addr: 0x014dc200
// name: GameCommand_LostPlayer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_LostPlayer_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameCommand_LostPlayer and logs the lost-player event. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ae4b8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  param_1[9] = 0;
  *param_1 = GameCommand_LostPlayer::vftable;
  FUN_0141b3d0(param_2);
  Game_logGeneral((void *)param_1[2],"LOST A PLAYER",uVar1);
  ExceptionList = local_c;
  return param_1;
}

