// addr: 0x012f06b0
// name: NetworkService_flushSendBuffer
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_flushSendBuffer(void * this) */

int __fastcall NetworkService_flushSendBuffer(void *this)

{
  int iVar1;
  
                    /* Attempts to send queued bytes from the NetworkService output buffer, compacts
                       partial sends, and treats WSAEWOULDBLOCK as nonfatal. Evidence: uses socket
                       ordinal send, memmove on remaining bytes, offset 0x58/0x5c buffer length, and
                       socket error 0x2733. */
  if (*(int *)((int)this + 0x5c) == 0) {
    return 0;
  }
  iVar1 = Ordinal_19(*(undefined4 *)((int)this + 0x44),*(undefined4 *)((int)this + 0x58),
                     *(int *)((int)this + 0x5c),0);
  if (-1 < iVar1) {
    if (iVar1 == 0) {
      if (*(char *)((int)this + 0x6d) != '\0') {
        return -1;
      }
    }
    else if (iVar1 != *(int *)((int)this + 0x5c)) {
      _memmove(*(void **)((int)this + 0x58),(void *)((int)*(void **)((int)this + 0x58) + iVar1),
               *(int *)((int)this + 0x5c) - iVar1);
    }
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) - iVar1;
    return iVar1;
  }
  iVar1 = Ordinal_111();
  if (iVar1 != 0x2733) {
    return -1;
  }
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x5c);
  *(undefined1 *)((int)this + 0x6d) = 0;
  return 0;
}

