// addr: 0x012f0520
// name: NetworkService_buildProxyConnectPacket
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkService_buildProxyConnectPacket(ushort port_) */

void __cdecl NetworkService_buildProxyConnectPacket(ushort port_)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_stack_00000006;
  
                    /* Builds a small proxy connect packet in caller-provided registers, writing
                       opcode bytes, network-order port, original port, and a NUL-terminated host
                       string. Evidence: only called from NetworkService proxy handshake and uses
                       Ordinal_9 htons-like conversion. */
  uVar3 = Ordinal_9(_port_);
  *(undefined2 *)(unaff_ESI + 2) = uVar3;
  *unaff_ESI = 4;
  unaff_ESI[1] = 1;
  *(undefined4 *)(unaff_ESI + 4) = _port_;
  iVar2 = 8 - (int)unaff_EDI;
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI[(int)(unaff_ESI + iVar2)] = cVar1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return;
}

