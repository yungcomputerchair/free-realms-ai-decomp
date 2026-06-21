// addr: 0x0143b8a0
// name: Engine_ArchetypeView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_ArchetypeView_dtor(void * this) */

void __fastcall Engine_ArchetypeView_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::ArchetypeView. It installs the derived vftable and
                       delegates cleanup to the FRTWArchetypeView/ArchetypeViewBase destructor
                       chain. */
  puStack_8 = &LAB_01697cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::ArchetypeView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWArchetypeView_dtor(this);
  ExceptionList = local_c;
  return;
}

