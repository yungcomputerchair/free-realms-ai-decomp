// addr: 0x014f3560
// name: NetworkCommand_Gift_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandGift.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Gift_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_Gift_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_Gift and copies two 32-bit fields.
                       Evidence: RTTI names NetworkCommand_Gift and assert string is clone in
                       NetworkCommandGift.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_Gift::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandGift.cpp",0x36);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

