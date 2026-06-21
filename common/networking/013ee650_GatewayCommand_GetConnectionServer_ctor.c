// addr: 0x013ee650
// name: GatewayCommand_GetConnectionServer_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GatewayCommand_GetConnectionServer_ctor(void * this) */

void * __fastcall GatewayCommand_GetConnectionServer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GatewayCommand_GetConnectionServer, initializing three string
                       members and scalar fields after the GatewayCommand base constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168eec9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GatewayCommand_ctor(this);
  *(undefined ***)this = GatewayCommand_GetConnectionServer::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x57;
  ExceptionList = local_c;
  return this;
}

