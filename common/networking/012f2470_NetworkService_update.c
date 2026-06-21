// addr: 0x012f2470
// name: NetworkService_update
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_update(void * this) */

int __fastcall NetworkService_update(void *this)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  
                    /* Dispatches NetworkService work based on connection state: initial connect,
                       pending connect, connected packet processing, or configured proxy handshake.
                        */
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  switch(*(undefined4 *)((int)this + 0x68)) {
  case 0:
    iVar2 = NetworkService_startConnection(this);
    return iVar2;
  case 1:
  case 4:
    iVar2 = NetworkService_updateConnecting(this,0);
    return iVar2;
  case 2:
  case 5:
    iVar2 = NetworkService_updateConnected(this);
    return iVar2;
  case 6:
    if (DAT_01cbd97c == 4) {
      iVar2 = NetworkService_updateHttpProxyConnection(this);
      return iVar2;
    }
    if (DAT_01cbd97c == 5) {
      iVar2 = NetworkService_updateSocks5Connection(this);
      return iVar2;
    }
    uVar1 = DAT_01cbd97c & 0xffffff00;
  }
  return uVar1;
}

