// addr: 0x01408bb0
// name: CWDeck_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWDeck_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWDeck by running Deck_ctor and replacing the vtable with
                       CWDeck::vftable. Evidence: direct Deck constructor call and CWDeck::vftable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Deck_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = CWDeck::vftable;
  ExceptionList = local_c;
  return param_1;
}

