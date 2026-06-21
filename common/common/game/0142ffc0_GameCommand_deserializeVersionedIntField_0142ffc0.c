// addr: 0x0142ffc0
// name: GameCommand_deserializeVersionedIntField_0142ffc0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool GameCommand_deserializeVersionedIntField_0142ffc0(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeVersionedIntField_0142ffc0(void *this,void *deserializer)

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
  
                    /* Deserializes common GameCommand data, handles an older-version string field,
                       and for newer versions reads an integer into this+0x24 before invoking the
                       virtual post-read method. Exact concrete command class is not identified. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01696378;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_34;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))
                    (deserializer,local_30,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  if ((cVar1 != '\0') && (cVar1 = GameCommand_deserializeCommon(deserializer), cVar1 != '\0')) {
    if (unaff_ESI < 4) {
      if (2 < unaff_ESI) {
        uStack_1c = 0xf;
        uStack_20 = 0;
        local_30[0] = 0;
        local_c = (void *)0x0;
        bVar2 = Deserializer_readString(deserializer,auStack_34);
        if (!bVar2) {
          local_c = (void *)0xffffffff;
          FUN_0041f1d7();
          ExceptionList = pvStack_14;
          return false;
        }
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
      }
    }
    else {
      bVar2 = Deserializer_readInteger(deserializer,(int *)&stack0xffffffc4);
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      *(undefined4 *)((int)this + 0x24) = unaff_EDI;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
    ExceptionList = pvStack_14;
    return (bool)uVar3;
  }
  ExceptionList = pvStack_14;
  return false;
}

