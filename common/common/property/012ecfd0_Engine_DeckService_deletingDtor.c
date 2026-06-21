// addr: 0x012ecfd0
// name: Engine_DeckService_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_DeckService_deletingDtor(void * this, char flags) */

void * __thiscall Engine_DeckService_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::DeckService. It resets the vftable,
                       runs FUN_013aa090 cleanup, and frees this if the deletion flag is set. */
  puStack_8 = &LAB_01673698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::DeckService::vftable;
  local_4 = 0xffffffff;
  FRTWDeckService_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

