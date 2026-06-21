// addr: 0x0140ff00
// name: CWCard_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWCard_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWCard by running Card_ctor, installing multiple CWCard vtables,
                       initializing an embedded container, and clearing a flag. Evidence: direct
                       Card_ctor call and CWCard::vftable assignments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692476;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Card_ctor(param_1,param_2,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CWCard::vftable;
  param_1[2] = CWCard::vftable;
  param_1[0x12] = CWCard::vftable;
  param_1[0x16] = CWCard::vftable;
  FUN_013806f0();
  *(undefined1 *)(param_1 + 0x50) = 0;
  ExceptionList = local_c;
  return param_1;
}

