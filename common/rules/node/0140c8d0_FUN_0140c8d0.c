// addr: 0x0140c8d0
// name: FUN_0140c8d0
// subsystem: common/rules/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0140c8d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01692018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = (**(code **)(*param_1 + 0x15c))(param_2,param_3,DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  FUN_012fa910();
  local_c = (void *)0x0;
  FUN_01300680(2);
  bVar1 = Game_getFlag_14d((void *)param_1[0xc]);
  if (bVar1) {
    cVar2 = Game_getFlag_318();
    if (cVar2 == '\0') goto LAB_0140c959;
  }
  FUN_0138a8c0(param_2,&stack0xffffffe0,1,0);
LAB_0140c959:
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return uVar3;
}

