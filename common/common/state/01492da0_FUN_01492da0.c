// addr: 0x01492da0
// name: FUN_01492da0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FUN_01492da0(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 auStack_34 [4];
  undefined1 local_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a2350;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_34;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,local_30,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  if (((cVar1 == '\0') || (cVar1 = FUN_01494230(param_2), cVar1 == '\0')) ||
     (bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffffc4), !bVar2)) {
    ExceptionList = pvStack_14;
    return false;
  }
  param_1[7] = unaff_ESI;
  bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffffc4);
  if (!bVar2) {
    ExceptionList = pvStack_14;
    return false;
  }
  param_1[8] = unaff_ESI;
  if (unaff_EBX < 2) {
    uStack_1c = 0xf;
    uStack_20 = 0;
    local_30[0] = 0;
    local_c = (void *)0x0;
    bVar2 = Deserializer_readString(param_2,auStack_34);
    if (!bVar2) goto LAB_01492e69;
    local_c = (void *)0xffffffff;
    FUN_0041f1d7();
  }
  else {
    bVar2 = ValueData_deserializeComponentPtr(param_2,(void **)(param_1 + 9));
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return false;
    }
  }
  if (unaff_EBX < 2) {
    uStack_1c = 0xf;
    uStack_20 = 0;
    local_30[0] = 0;
    local_c = (void *)0x1;
    bVar2 = Deserializer_readString(param_2,auStack_34);
    if (!bVar2) {
LAB_01492e69:
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
      ExceptionList = pvStack_14;
      return false;
    }
    local_c = (void *)0xffffffff;
    FUN_0041f1d7();
  }
  else {
    bVar2 = ValueData_deserializeComponentPtr(param_2,(void **)(param_1 + 10));
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return bVar2;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
  ExceptionList = pvStack_14;
  return (bool)uVar3;
}

