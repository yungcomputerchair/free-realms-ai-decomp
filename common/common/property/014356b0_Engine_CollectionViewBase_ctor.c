// addr: 0x014356b0
// name: Engine_CollectionViewBase_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_CollectionViewBase_ctor(void * this) */

void * __fastcall Engine_CollectionViewBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CollectionViewBase by installing its vtable and constructing
                       embedded Filter, PageFilter, and ArchetypeView members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696f41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::CollectionViewBase::vftable;
  Engine_Filter_ctor((void *)((int)this + 4));
  local_4 = 0;
  Engine_PageFilter_ctor((void *)((int)this + 0x68));
  local_4 = CONCAT31(local_4._1_3_,1);
  Engine_ArchetypeView_ctor((void *)((int)this + 0x78));
  ExceptionList = local_c;
  return this;
}

