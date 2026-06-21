// addr: 0x014897b0
// name: CommandObject_deserializeTargetQueryPayload
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool CommandObject_deserializeTargetQueryPayload(void * this, void * reader)
    */

bool __thiscall CommandObject_deserializeTargetQueryPayload(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EBX;
  int unaff_ESI;
  int local_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a command object payload with template/base data, integer and
                       boolean fields, versioned component pointers, and a final component pointer.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a18e0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_3c;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_3c,DAT_01b839d8 ^ (uint)&stack0xffffffb8)
  ;
  if (((cVar1 != '\0') && (cVar1 = FUN_01494230(reader), cVar1 != '\0')) &&
     (bVar2 = Deserializer_readInteger(reader,&iStack_38), bVar2)) {
    *(int *)((int)this + 0x1c) = iStack_38;
    bVar2 = Deserializer_readInteger(reader,(int *)&stack0xffffffc0);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return false;
    }
    *(bool *)((int)this + 0x2c) = unaff_EBX != 0;
    if (unaff_ESI < 2) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      local_c = (void *)0x0;
      bVar2 = Deserializer_readString(reader,auStack_34);
      if (!bVar2) goto LAB_0148987c;
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = ValueData_deserializeComponentPtr(reader,(void **)((int)this + 0x24));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
    }
    if (unaff_ESI < 2) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      local_c = (void *)0x1;
      bVar2 = Deserializer_readString(reader,auStack_34);
      if (!bVar2) {
LAB_0148987c:
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
        ExceptionList = pvStack_14;
        return false;
      }
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = ValueData_deserializeComponentPtr(reader,(void **)((int)this + 0x28));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return bVar2;
      }
    }
    bVar2 = Deserializer_readInteger(reader,&local_3c);
    if (bVar2) {
      *(int *)((int)this + 0x30) = local_3c;
      NetworkCommand_deserializeComponentPtr(reader,(void **)((int)this + 0x20));
      uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
      ExceptionList = pvStack_14;
      return (bool)uVar3;
    }
  }
  ExceptionList = pvStack_14;
  return false;
}

