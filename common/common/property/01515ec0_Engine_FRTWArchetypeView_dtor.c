// addr: 0x01515ec0
// name: Engine_FRTWArchetypeView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_FRTWArchetypeView_dtor(void * this) */

void __fastcall Engine_FRTWArchetypeView_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::FRTWArchetypeView. It installs the class vftable and
                       then destroys the ArchetypeViewBase subobject. */
  puStack_8 = &LAB_016b74a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWArchetypeView::vftable;
  local_4 = 0xffffffff;
  Engine_ArchetypeViewBase_dtor(this);
  ExceptionList = local_c;
  return;
}

