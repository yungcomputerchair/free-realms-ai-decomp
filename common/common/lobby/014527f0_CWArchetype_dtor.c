// addr: 0x014527f0
// name: CWArchetype_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWArchetype_dtor(void * this) */

void __fastcall CWArchetype_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs a CWArchetype by restoring its vtables and invoking the Archetype
                       base destructor. */
  puStack_8 = &LAB_0169b8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWArchetype::vftable;
  *(undefined ***)((int)this + 4) = CWArchetype::vftable;
  local_4 = 0xffffffff;
  Archetype_dtor(this);
  ExceptionList = local_c;
  return;
}

