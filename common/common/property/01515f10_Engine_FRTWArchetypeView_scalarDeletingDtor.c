// addr: 0x01515f10
// name: Engine_FRTWArchetypeView_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWArchetypeView_scalarDeletingDtor(void * this, char flags) */

void * __thiscall Engine_FRTWArchetypeView_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::FRTWArchetypeView. It destroys the
                       base subobject and frees this when the deleting flag is set. */
  puStack_8 = &LAB_016b74d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWArchetypeView::vftable;
  local_4 = 0xffffffff;
  Engine_ArchetypeViewBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

