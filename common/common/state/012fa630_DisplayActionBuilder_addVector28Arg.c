// addr: 0x012fa630
// name: DisplayActionBuilder_addVector28Arg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addVector28Arg(void * vector) */

void __thiscall DisplayActionBuilder_addVector28Arg(void *this,void *vector)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DisplayAction ValueData argument with type code 7 from a vector-like
                       0x1c/28-byte-element collection using StdVector28_assign. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016756e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(7);
  StdVector28_assign(vector);
  DisplayAction_addArgValueData(this,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

