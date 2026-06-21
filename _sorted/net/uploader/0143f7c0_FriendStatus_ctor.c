// addr: 0x0143f7c0
// name: FriendStatus_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FriendStatus_ctor(void * this) */

void * __fastcall FriendStatus_ctor(void *this)

{
                    /* Constructs FriendStatus as a PersistentComponent and initializes multiple
                       inline string/status fields. Vtable symbols identify the class. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = FriendStatus::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  return this;
}

