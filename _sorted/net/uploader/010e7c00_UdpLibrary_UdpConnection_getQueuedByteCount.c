// addr: 0x010e7c00
// name: UdpLibrary_UdpConnection_getQueuedByteCount
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int UdpLibrary_UdpConnection_getQueuedByteCount(int this_) */

int __fastcall UdpLibrary_UdpConnection_getQueuedByteCount(int this_)

{
                    /* Returns the 32-bit counter stored at offset 0x20ec on a UDP connection
                       object, likely a queued-byte or buffered-packet statistic. */
  return *(int *)(this_ + 0x20ec);
}

