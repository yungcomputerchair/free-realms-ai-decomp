// addr: 0x013eaec0
// name: CWDeckBuilderUtilities_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CWDeckBuilderUtilities_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for CWDeckBuilderUtilities; it runs the destructor chain
                       and frees this when the delete flag is set. */
  puStack_8 = &LAB_0168e878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CWDeckBuilderUtilities::vftable;
  local_4 = 0xffffffff;
  DeckBuilderUtilities_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

