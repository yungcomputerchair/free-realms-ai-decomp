// addr: 0x01442240
// name: DeckCommand_dtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_dtor(void * this) */

void __fastcall DeckCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Sets the DeckCommand vftable during destruction and invokes the base/member
                       destructor helper. Evidence: explicit DeckCommand::vftable assignment and
                       callers from DeckCommand-derived destructors. */
  puStack_8 = &LAB_01698e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

