// addr: 0x012fa2e0
// name: DisplayActionBuilder_addIntArg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addIntArg(int value_) */

void __thiscall DisplayActionBuilder_addIntArg(void *this,int value_)

{
  undefined1 local_18 [8];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DisplayAction ValueData argument with type code 2 and stores the
                       supplied 32-bit value before adding it via DisplayAction_addArgValueData.
                       Widely called from state/game message builders. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016755c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(2);
  local_10 = value_;
  DisplayAction_addArgValueData(this,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

