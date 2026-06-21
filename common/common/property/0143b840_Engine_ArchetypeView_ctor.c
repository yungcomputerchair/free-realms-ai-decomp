// addr: 0x0143b840
// name: Engine_ArchetypeView_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_ArchetypeView_ctor(void * this) */

void * __fastcall Engine_ArchetypeView_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for Engine::ArchetypeView. It constructs the
                       FRTWArchetypeView/base part via FUN_01515f70 and then installs
                       Engine::ArchetypeView::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWArchetypeView_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::ArchetypeView::vftable;
  ExceptionList = local_c;
  return this;
}

