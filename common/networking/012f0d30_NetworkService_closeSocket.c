// addr: 0x012f0d30
// name: NetworkService_closeSocket
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkService_closeSocket(void * this, bool freePending_) */

void __thiscall NetworkService_closeSocket(void *this,bool freePending_)

{
  void *this_00;
  
                    /* Closes the NetworkService socket and clears receive/send/pending buffers,
                       optionally freeing queued pending data. Evidence: called from
                       disconnect/destructor paths, closesocket/shutdown-like ordinals, and resets
                       socket handle to -1. */
  DisplayActionManager_ensureSingleton();
  clear_member4(this_00);
  switch(*(undefined4 *)((int)this + 0x68)) {
  case 0:
  case 7:
    return;
  case 2:
  case 5:
    NetworkService_setConnectionState(this,0);
  }
  if (*(void **)((int)this + 0x50) == (void *)0x0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x58));
    }
    *(undefined4 *)((int)this + 0x5c) = 0;
    if (freePending_) {
      if (*(void **)((int)this + 0x60) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x60));
      }
      *(undefined4 *)((int)this + 100) = 0;
    }
    Ordinal_22(*(undefined4 *)((int)this + 0x44),1);
    Ordinal_3(*(undefined4 *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x50));
}

