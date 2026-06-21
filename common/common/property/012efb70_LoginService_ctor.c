// addr: 0x012efb70
// name: LoginService_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginService_ctor(void * this) */

void __fastcall LoginService_ctor(void *this)

{
                    /* Constructs the LoginService singleton object by installing
                       LoginService::vftable and initializing many inline std::string members to
                       empty SSO state. */
  *(undefined ***)this = LoginService::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0xf;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xf;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0xf;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xf;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0xf;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x138) = 0xf;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x124) = 0;
  return;
}

