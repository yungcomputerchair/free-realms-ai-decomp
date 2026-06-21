// addr: 0x01435720
// name: Engine_CollectionViewBase_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_CollectionViewBase_dtor(void * this) */

void __fastcall Engine_CollectionViewBase_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys a CollectionViewBase by restoring its vtable and destructing
                       embedded ArchetypeView, PageFilter, and Filter/base members in reverse order.
                        */
  puStack_8 = &LAB_01696f81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::CollectionViewBase::vftable;
  local_4 = 1;
  Engine_ArchetypeView_dtor((void *)((int)this + 0x78));
  local_4 = local_4 & 0xffffff00;
  Engine_PageFilter_dtor((void *)((int)this + 0x68));
  local_4 = 0xffffffff;
  Engine_Filter_dtor((void *)((int)this + 4));
  ExceptionList = local_c;
  return;
}

