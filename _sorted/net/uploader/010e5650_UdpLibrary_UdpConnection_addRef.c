// addr: 0x010e5650
// name: UdpLibrary_UdpConnection_addRef
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpLibrary_UdpConnection_addRef(int this_) */

void __fastcall UdpLibrary_UdpConnection_addRef(int this_)

{
                    /* Acquires the UDP library lock, increments the connection reference count,
                       then releases the lock. */
  FUN_010da6d0();
  *(int *)(this_ + 4) = *(int *)(this_ + 4) + 1;
  FUN_010da6e0();
  return;
}

