// addr: 0x014dbfb0
// name: GameCommand_deserializeLegacyStringOrInt_014dbfb0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool GameCommand_deserializeLegacyStringOrInt_014dbfb0(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeLegacyStringOrInt_014dbfb0(void *this,void *deserializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 auStack_34 [4];
  undefined1 local_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes common GameCommand data and then consumes either a legacy string
                       for versions below 3 or an integer stored at this+0x24 for newer versions.
                       Evidence: GameCommand_deserializeCommon, string read helper, and
                       Deserializer_readInteger. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ae458;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_34;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))
                    (deserializer,local_30,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  if ((cVar1 != '\0') && (cVar1 = GameCommand_deserializeCommon(deserializer), cVar1 != '\0')) {
    if (unaff_ESI < 3) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      local_30[0] = 0;
      local_c = (void *)0x0;
      bVar2 = Deserializer_readString(deserializer,auStack_34);
      if (bVar2) {
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
LAB_014dc078:
        uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
        ExceptionList = pvStack_14;
        return (bool)uVar3;
      }
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = Deserializer_readInteger(deserializer,(int *)&stack0xffffffc4);
      if (bVar2) {
        *(undefined4 *)((int)this + 0x24) = unaff_EDI;
        goto LAB_014dc078;
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}

