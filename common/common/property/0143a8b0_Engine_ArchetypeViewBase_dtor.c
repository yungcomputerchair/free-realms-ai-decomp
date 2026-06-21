// addr: 0x0143a8b0
// name: Engine_ArchetypeViewBase_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_ArchetypeViewBase_dtor(void * this) */

void __fastcall Engine_ArchetypeViewBase_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::ArchetypeViewBase. It installs the ArchetypeViewBase
                       vftable and then calls the shared base destructor FUN_0143c1e0 under EH
                       cleanup. */
  puStack_8 = &LAB_01697978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::ArchetypeViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(this);
  ExceptionList = local_c;
  return;
}

