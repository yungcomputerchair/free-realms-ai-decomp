// addr: 0x014f0010
// name: NetworkCommand_UpdateLag_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandUpdateLag.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_UpdateLag_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_UpdateLag_cloneInto(void *this,void *allocator)

{
  void *this_00;
  int iVar1;
  undefined1 auStack_8 [8];
  
                    /* Allocates/clones NetworkCommand_UpdateLag and copies its container member
                       when source and destination differ. Evidence: RTTI names
                       NetworkCommand_UpdateLag and assert string is clone in
                       NetworkCommandUpdateLag.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_UpdateLag::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandUpdateLag.cpp",0x41);
  }
  NetworkCommand_cloneBaseFields(this_00);
  iVar1 = (int)this_00 + 4;
  if (iVar1 != (int)this + 4) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)this_00 + 8),iVar1,
                 *(undefined4 **)((int)this_00 + 8));
    FUN_012415a0((int)this + 4);
  }
  return;
}

