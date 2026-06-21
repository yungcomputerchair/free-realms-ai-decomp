// addr: 0x013af0b0
// name: Engine_MatchViewBase_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_MatchViewBase_dtor(void * this) */

void __fastcall Engine_MatchViewBase_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys Engine::MatchViewBase by installing its vftable and invoking
                       Engine_SortableView_dtor for the base class. */
  puStack_8 = &LAB_01686da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::MatchViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(this);
  ExceptionList = local_c;
  return;
}

