// addr: 0x013ee8f0
// name: GatewayCommand_GetConnectionServer_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GatewayCommand_GetConnectionServer_dtor_deleting(void * this, char
   flags_) */

void * __thiscall GatewayCommand_GetConnectionServer_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for GatewayCommand_GetConnectionServer;
                       calls its destructor and optionally frees this. */
  GatewayCommand_GetConnectionServer_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

