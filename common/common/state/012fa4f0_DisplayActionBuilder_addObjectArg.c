// addr: 0x012fa4f0
// name: DisplayActionBuilder_addObjectArg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addObjectArg(void * value) */

void __thiscall DisplayActionBuilder_addObjectArg(void *this,void *value)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DisplayAction ValueData argument with type code 6 after
                       copying/constructing the supplied object value. Exact ValueData type 6
                       meaning is not named. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(6);
  FUN_005f1e5c(value);
  DisplayAction_addArgValueData(this,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

