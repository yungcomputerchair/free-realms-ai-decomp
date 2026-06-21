// addr: 0x013727e0
// name: FUN_013727e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013727e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  puStack_3f8 = &LAB_01680fb3;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  local_3f4 = 0;
  iVar1 = Game_findPlayerByAccountId(param_2);
  if (iVar1 == 0) {
    Game_logGeneral(param_1,"removePlayerFromGame:: couldnt\' get Player for accountid: %d",param_2)
    ;
  }
  else {
    iVar1 = *param_1;
    uVar2 = GamePlayer_getPlayerId(param_3);
    (**(code **)(iVar1 + 0xb0))(uVar2);
  }
  ExceptionList = local_3fc;
  return;
}

