// addr: 0x014f0870
// name: NetworkCommand_UpdateDataVersion_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandUpdateDataVersion.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_UpdateDataVersion_cloneInto(void * this, void * allocator)
    */

void __thiscall NetworkCommand_UpdateDataVersion_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_UpdateDataVersion and copies scalar plus
                       vector-like version lists. Evidence: RTTI names
                       NetworkCommand_UpdateDataVersion and assert string is clone in
                       NetworkCommandUpdateDataVersion.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_UpdateDataVersion::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandUpdateDataVersion.cpp",0x4f);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  StdVector28_assign((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  return;
}

