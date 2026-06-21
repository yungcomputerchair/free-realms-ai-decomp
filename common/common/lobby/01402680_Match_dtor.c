// addr: 0x01402680
// name: Match_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Match_dtor(void * this) */

void __fastcall Match_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs a Match by restoring Match vtables and invoking the
                       TradingCard::Lobby base destructor. */
  puStack_8 = &LAB_01690e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Match::vftable;
  *(undefined ***)((int)this + 4) = Match::vftable;
  local_4 = 0xffffffff;
  PersistentBase_ctor(this);
  ExceptionList = local_c;
  return;
}

