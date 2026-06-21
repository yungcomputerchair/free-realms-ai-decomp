// addr: 0x0143fdc0
// name: IgnoreStatus_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IgnoreStatus_ctor(void * this) */

void * __fastcall IgnoreStatus_ctor(void *this)

{
                    /* Constructs IgnoreStatus as a PersistentComponent and initializes inline
                       strings/status fields. Vtable symbols identify the class. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = IgnoreStatus::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  return this;
}

