// addr: 0x013eaaf0
// name: CWDeckBuilderUtilities_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWDeckBuilderUtilities_dtor(void * this) */

void __fastcall CWDeckBuilderUtilities_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a CWDeckBuilderUtilities object by setting its vftable then chaining
                       to DeckBuilderUtilities_dtor. */
  puStack_8 = &LAB_0168e818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWDeckBuilderUtilities::vftable;
  local_4 = 0xffffffff;
  DeckBuilderUtilities_dtor(this);
  ExceptionList = local_c;
  return;
}

