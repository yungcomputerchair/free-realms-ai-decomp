// addr: 0x012f03d0
// name: NetworkService_mapConnectionError
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_mapConnectionError(void * this, int errorCode_) */

int __thiscall NetworkService_mapConnectionError(void *this,int errorCode_)

{
                    /* Maps generic connection error codes to alternate codes based on proxy mode
                       and gateway/default flag. Evidence: called by the NetworkService error
                       reporting helper and checks the same global proxy flag used by connection
                       state machines. */
  if (errorCode_ == 2) {
    if (DAT_01cbd978 == '\x01') {
      return 0xc;
    }
    errorCode_ = (-(uint)(*(char *)((int)this + 0x4d) != '\0') & 0x57) + 2;
  }
  else if (errorCode_ == 6) {
    if (DAT_01cbd978 == '\x01') {
      return 0xd;
    }
    return (-(uint)(*(char *)((int)this + 0x4d) != '\0') & 0x54) + 6;
  }
  return errorCode_;
}

