// addr: 0x013ee740
// name: GatewayCommand_GetConnectionServer_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_GetConnectionServer_dtor(void * this) */

void __fastcall GatewayCommand_GetConnectionServer_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for GatewayCommand_GetConnectionServer; frees three
                       small-string buffers if heap allocated and calls the GatewayCommand base
                       destructor. */
  puStack_8 = &LAB_0168ef19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GatewayCommand_GetConnectionServer::vftable;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  GatewayCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

