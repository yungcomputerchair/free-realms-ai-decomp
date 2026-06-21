// addr: 0x010def40
// name: UdpManager_callbackRawPacket
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpManager_callbackRawPacket(void * this, void * connection, void * data,
   uint len_) */

void __thiscall UdpManager_callbackRawPacket(void *this,void *connection,void *data,uint len_)

{
  void *pvVar1;
  int *piVar2;
  
                    /* If callbacks are asynchronous, allocates a callback event for event type 4
                       and queues it; otherwise directly invokes the raw-packet callback. */
  if (*(char *)((int)this + 0x17c) != '\0') {
    pvVar1 = UdpManager_AllocCallbackEvent(this);
    piVar2 = (int *)UdpLibrary_PooledLogicalPacket_acquire(data,len_,0,0);
    FUN_010dbdc0(4,connection,piVar2,0);
    (**(code **)(*piVar2 + 4))();
    FUN_010ddff0(pvVar1);
    return;
  }
  FUN_010e28d0(data,len_);
  return;
}

