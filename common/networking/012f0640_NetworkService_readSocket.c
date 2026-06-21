// addr: 0x012f0640
// name: NetworkService_readSocket
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_readSocket(void * this) */

int __fastcall NetworkService_readSocket(void *this)

{
  void *pvVar1;
  int iVar2;
  
                    /* Reads up to 0x1000 bytes from the service socket into the receive buffer,
                       growing it as needed and treating WSAEWOULDBLOCK as no data. Evidence:
                       recv-like ordinal, socket at 0x44, buffer at 0x50/0x54, and error 0x2733. */
  if (*(int *)((int)this + 0x50) == 0) {
    pvVar1 = _malloc(*(int *)((int)this + 0x54) + 0x1000);
    *(void **)((int)this + 0x50) = pvVar1;
  }
  else {
    iVar2 = FUN_00d8a744(*(int *)((int)this + 0x50));
    *(int *)((int)this + 0x50) = iVar2;
    if (iVar2 == 0) {
      return -1;
    }
  }
  iVar2 = Ordinal_16(*(undefined4 *)((int)this + 0x44),
                     *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50),0x1000,0);
  if (iVar2 < 0) {
    iVar2 = Ordinal_111();
    if (iVar2 == 0x2733) {
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x54);
      return 0;
    }
  }
  else if ((iVar2 != 0) || (*(char *)((int)this + 0x6c) == '\0')) {
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar2;
    return iVar2;
  }
  return -1;
}

