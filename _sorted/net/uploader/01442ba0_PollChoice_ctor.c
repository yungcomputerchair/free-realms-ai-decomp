// addr: 0x01442ba0
// name: PollChoice_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollChoice_ctor(void * this) */

void * __fastcall PollChoice_ctor(void *this)

{
                    /* Constructs PollChoice as a PersistentComponent, setting default ids to -1 and
                       clearing text/status fields. Vtable symbols identify the class. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PollChoice::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return this;
}

