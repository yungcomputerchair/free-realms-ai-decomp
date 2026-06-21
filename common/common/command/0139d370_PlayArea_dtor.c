// addr: 0x0139d370
// name: PlayArea_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayArea_dtor(void * this) */

void __fastcall PlayArea_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for PlayArea; resets both vftable slots to PlayArea and then
                       chains to the PlayElement destructor. */
  puStack_8 = &LAB_01685338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PlayArea::vftable;
  *(undefined ***)((int)this + 8) = PlayArea::vftable;
  local_4 = 0xffffffff;
  PlayElement_dtor(this);
  ExceptionList = local_c;
  return;
}

