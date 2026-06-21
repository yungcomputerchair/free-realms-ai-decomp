// addr: 0x013eaa90
// name: CWDeckBuilderUtilities_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWDeckBuilderUtilities_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWDeckBuilderUtilities by running DeckBuilderUtilities_ctor and
                       installing CWDeckBuilderUtilities::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168e7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckBuilderUtilities_ctor(param_1);
  *param_1 = CWDeckBuilderUtilities::vftable;
  ExceptionList = local_c;
  return param_1;
}

