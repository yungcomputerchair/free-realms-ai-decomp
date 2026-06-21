// addr: 0x013aeff0
// name: Engine_MatchViewBase_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_MatchViewBase_ctor(void * this) */

void * __fastcall Engine_MatchViewBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::MatchViewBase on top of Engine::SortableView and registers
                       a fixed set of match-view column/property ids. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_SortableView_ctor(this);
  local_4 = 0;
  *(undefined ***)this = Engine::MatchViewBase::vftable;
  Engine_MatchViewBase_requireColumn(0xfa6);
  Engine_MatchViewBase_requireColumn(0xfad);
  Engine_MatchViewBase_requireColumn(0xfaa);
  Engine_MatchViewBase_requireColumn(0xfb0);
  Engine_MatchViewBase_requireColumn(0xfa9);
  Engine_MatchViewBase_requireColumn(0xfa7);
  Engine_MatchViewBase_requireColumn(0xfb1);
  Engine_MatchViewBase_requireColumn(0x273);
  ExceptionList = local_c;
  return this;
}

