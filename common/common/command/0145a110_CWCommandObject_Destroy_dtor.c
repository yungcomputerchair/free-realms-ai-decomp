// addr: 0x0145a110
// name: CWCommandObject_Destroy_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCommandObject_Destroy_dtor(void * this) */

void __fastcall CWCommandObject_Destroy_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWCommandObject_Destroy: installs the class vftable during
                       teardown and then invokes the CommandObject base destructor. The vtable
                       symbol provides the class name. */
  puStack_8 = &LAB_0169c7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWCommandObject_Destroy::vftable;
  *(undefined ***)((int)this + 8) = CWCommandObject_Destroy::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

