// addr: 0x013aa1c0
// name: FRTWDeckService_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FRTWDeckService_scalarDeletingDtor(void * this, char flags) */

void * __thiscall FRTWDeckService_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler scalar-deleting destructor for Engine::FRTWDeckService. It performs
                       the FRTWDeckService/base destruction and conditionally frees the object
                       according to the low flag bit. */
  puStack_8 = &LAB_01686538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWDeckService::vftable;
  local_4 = 0xffffffff;
  Engine_DeckServiceBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

