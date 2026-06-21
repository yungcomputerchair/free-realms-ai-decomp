// addr: 0x014f0d60
// name: NetworkCommand_deserializeVersionedPlayerPayload
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool NetworkCommand_deserializeVersionedPlayerPayload(void * this, void *
   reader) */

bool __thiscall NetworkCommand_deserializeVersionedPlayerPayload(void *this,void *reader)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  undefined1 local_4c [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a network command template with legacy string fields for old
                       versions or a larger integer/string payload for newer versions. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b1de0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_4c;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,local_4c,DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  if ((cVar1 != '\0') && (NetworkCommand_deserializeTemplate(this,reader), extraout_AL != '\0')) {
    if (unaff_ESI < 2) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      uStack_38 = 0xf;
      uStack_3c = 0;
      local_4c[0] = 0;
      local_c._0_1_ = 1;
      local_c._1_3_ = 0;
      bVar2 = Deserializer_readString(reader,auStack_34);
      if ((!bVar2) || (bVar2 = Deserializer_readString(reader,&stack0xffffffb0), !bVar2)) {
        local_c = (void *)((uint)local_c._1_3_ << 8);
        FUN_0041f1d7();
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
        ExceptionList = pvStack_14;
        return false;
      }
      local_c = (void *)((uint)local_c._1_3_ << 8);
      FUN_0041f1d7();
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 4));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0xc));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x10));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x14));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x18));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readString(reader,(void *)((int)this + 0x1c));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x38));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
    }
    bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x3c));
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
      ExceptionList = pvStack_14;
      return (bool)uVar3;
    }
  }
  ExceptionList = pvStack_14;
  return false;
}

