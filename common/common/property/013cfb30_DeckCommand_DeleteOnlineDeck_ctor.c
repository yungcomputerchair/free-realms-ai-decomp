// addr: 0x013cfb30
// name: DeckCommand_DeleteOnlineDeck_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall DeckCommand_DeleteOnlineDeck_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DeckCommand_DeleteOnlineDeck by running the base command
                       constructor, installing the class vtable, and initializing an empty deck-name
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ab53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckCommand_ctor(param_1);
  *param_1 = DeckCommand_DeleteOnlineDeck::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_c;
  return param_1;
}

