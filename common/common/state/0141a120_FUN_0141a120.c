// addr: 0x0141a120
// name: FUN_0141a120
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_0141a120(undefined4 *param_1,void *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_ReadyForStartOfGame::vftable;
  FUN_0141b3d0(param_2);
  iVar1 = Game_getMyPlayerID(param_2);
  param_1[1] = iVar1;
  ExceptionList = local_c;
  return param_1;
}

