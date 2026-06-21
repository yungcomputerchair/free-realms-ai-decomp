// addr: 0x01452730
// name: CWArchetype_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWArchetype_ctor(void * this) */

void * __fastcall CWArchetype_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWArchetype via base initialization and installs primary and
                       secondary CWArchetype vtables. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Archetype_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = CWArchetype::vftable;
  *(undefined ***)((int)this + 4) = CWArchetype::vftable;
  ExceptionList = local_c;
  return this;
}

