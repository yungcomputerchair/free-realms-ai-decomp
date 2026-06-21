// addr: 0x010e5670
// name: UdpLibrary_UdpConnection_release
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpLibrary_UdpConnection_release(int this_) */

void __fastcall UdpLibrary_UdpConnection_release(int this_)

{
  int *piVar1;
  int iVar2;
  
                    /* Acquires the UDP library lock, decrements the connection reference count,
                       releases the lock, and invokes the virtual destroy method when the count
                       reaches zero. */
  FUN_010da6d0();
  piVar1 = (int *)(this_ + 4);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  FUN_010da6e0();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this_ + 0x10))(1);
  }
  return;
}

