// addr: 0x014f2ee0
// name: NetworkCommand_News_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandNews.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_News_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_News_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_News and copies multiple vector/string-like
                       members. Evidence: RTTI names NetworkCommand_News and assert string is clone
                       in NetworkCommandNews.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_News::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandNews.cpp",0x46);
  }
  NetworkCommand_cloneBaseFields(this_00);
  StdVector28_assign((int)this + 4);
  StdVector28_assign((int)this + 0x14);
  FUN_005f1e5c((int)this + 0x24);
  return;
}

