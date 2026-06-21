// addr: 0x012fa570
// name: FUN_012fa570
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012fa570(void *param_1,int param_2)

{
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016756b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  local_4 = 0;
  FUN_01300680(0xd);
  if (local_10 != param_2) {
    FUN_005152ac(local_20,local_10,**(undefined4 **)(local_10 + 4),local_10,
                 *(undefined4 **)(local_10 + 4));
    FUN_012415a0(param_2);
  }
  DisplayAction_addArgValueData(param_1,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

