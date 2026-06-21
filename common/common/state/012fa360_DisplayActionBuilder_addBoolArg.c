// addr: 0x012fa360
// name: DisplayActionBuilder_addBoolArg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addBoolArg(bool value_) */

void __thiscall DisplayActionBuilder_addBoolArg(void *this,bool value_)

{
  undefined1 local_18 [8];
  bool local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DisplayAction ValueData argument with type code 1 and stores the
                       supplied byte before adding it via DisplayAction_addArgValueData. Used by
                       several state and command display/debug builders. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016755f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(1);
  local_10 = value_;
  DisplayAction_addArgValueData(this,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

